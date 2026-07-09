using System.IO.Compression;

namespace Utility.Algorithms
{
    internal class DeflateAlgorithm : CompressionAlgorithm
    {
        public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
        {
            return CompressStream(output => new DeflateStream(output, level, leaveOpen: true), data);
        }

        public override byte[] Decompress(byte[] data, int bufferSize = DefaultBufferSize, long maxSize = DefaultMaxSize)
        {
            return DecompressStream(input => new DeflateStream(input, CompressionMode.Decompress), data, bufferSize, maxSize);
        }
    }
}
