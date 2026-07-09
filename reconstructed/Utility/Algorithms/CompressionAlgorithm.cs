using System;
using System.IO;
using System.IO.Compression;
using System.Text;

namespace Utility.Algorithms
{
    internal abstract class CompressionAlgorithm
    {
        public const int DefaultBufferSize = 4096; // 4 kib read buffer
        public const int DefaultMaxSize = 10485760; // 10 mib decompression cap

        public abstract byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest);

        public abstract byte[] Decompress(byte[] data, int bufferSize = DefaultBufferSize, long maxSize = DefaultMaxSize);

        public byte[] CompressString(string str, CompressionLevel level = CompressionLevel.Fastest)
        {
            if (string.IsNullOrEmpty(str))
                return Array.Empty<byte>();
            return Compress(Encoding.UTF8.GetBytes(str), level);
        }

        public string DecompressString(byte[] data, int bufferSize = DefaultBufferSize, long maxSize = DefaultMaxSize)
        {
            if (data == null || data.Length == 0)
                return string.Empty;
            return Encoding.UTF8.GetString(Decompress(data, bufferSize, maxSize));
        }

        protected static byte[] CompressStream(Func<Stream, Stream> createCompressor, byte[] data)
        {
            using (MemoryStream output = new MemoryStream())
            {
                using (Stream compressor = createCompressor(output))
                    compressor.Write(data, 0, data.Length);
                return output.ToArray();
            }
        }

        protected static byte[] DecompressStream(Func<Stream, Stream> createDecompressor, byte[] data, int bufferSize, long maxSize)
        {
            using (MemoryStream output = new MemoryStream())
            {
                using (MemoryStream input = new MemoryStream(data))
                using (Stream decompressor = createDecompressor(input))
                {
                    byte[] buffer = new byte[bufferSize];
                    long total = 0;
                    int read;
                    while ((read = decompressor.Read(buffer, 0, bufferSize)) > 0)
                    {
                        total += read;
                        if (total > maxSize)
                            throw new IOException(string.Format("Decompressed size exceeded maximum allowed ({0} > {1})", total, maxSize));
                        output.Write(buffer, 0, read);
                    }
                }
                return output.ToArray();
            }
        }
    }
}
