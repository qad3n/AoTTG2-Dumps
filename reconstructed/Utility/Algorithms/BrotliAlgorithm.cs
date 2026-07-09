using System.IO.Compression;

namespace Utility.Algorithms
{
    internal class BrotliAlgorithm : CompressionAlgorithm
    {
        public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
        {
            return CompressStream(output => new BrotliStream(output, level, leaveOpen: true), data);
        }

        public override byte[] Decompress(byte[] data, int bufferSize = DefaultBufferSize, long maxSize = DefaultMaxSize)
        {
            return DecompressStream(input => new BrotliStream(input, CompressionMode.Decompress), data, bufferSize, maxSize);
        }
    }
}
