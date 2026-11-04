// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.FileBasedResourceGroveler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004E6")]
internal class FileBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x4001371")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x60023E3")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public FileBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[Token(Token = "0x60023E4")]
	[Address(RVA = "0x1A45F00", Offset = "0x1A44500", VA = "0x181A45F00", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023E5")]
	[Address(RVA = "0x1A45E40", Offset = "0x1A44440", VA = "0x181A45E40")]
	private string FindResourceFile(CultureInfo culture, string fileName)
	{
		return null;
	}

	[Token(Token = "0x60023E6")]
	[Address(RVA = "0x1A45A70", Offset = "0x1A44070", VA = "0x181A45A70")]
	private ResourceSet CreateResourceSet(string file)
	{
		return null;
	}
}
