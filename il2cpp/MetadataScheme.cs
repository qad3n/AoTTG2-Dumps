namespace loader
{
	// one encrypted table: where its offset and size sit in the decrypted header, the bias the reader adds and its keystream seed
	internal readonly record struct MetadataSpan(int offsetField, int sizeField, int bias, ulong seed);

	// how one game module encrypts global-metadata.dat, every field here read out of that module by a static extractor
	internal sealed record MetadataScheme(string moduleSha256, int version, ulong headerSeed, int headerSize, uint sboxRva, MetadataSpan[] spans, int[] sectionOrder);
}
