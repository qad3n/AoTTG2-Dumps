using Utility.Algorithms;

namespace Utility
{
    internal static class DataCompressors
    {
        public static readonly BrotliAlgorithm Brotli = new BrotliAlgorithm();
        public static readonly GZipAlgorithm GZip = new GZipAlgorithm();
        public static readonly DeflateAlgorithm ZLib = new DeflateAlgorithm(); // zlib slot is a raw deflate stream

        public static readonly LZFAlgorithm LZF = new LZFAlgorithm();
    }
}
