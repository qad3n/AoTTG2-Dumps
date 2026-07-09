using System.IO.Compression;

namespace Utility.Algorithms
{
    internal class GZipAlgorithm : CompressionAlgorithm
    {
        public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
        {
            return CompressStream(output => new GZipStream(output, level, leaveOpen: true), data);
        }

        public override byte[] Decompress(byte[] data, int bufferSize = DefaultBufferSize, long maxSize = DefaultMaxSize)
        {
            return DecompressStream(input => new GZipStream(input, CompressionMode.Decompress), data, bufferSize, maxSize);
        }
    }
}
