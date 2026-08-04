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

[Token(Token = "0x20004B6")]
internal class FileBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x4001371")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x6002361")]
	[Address(RVA = "0x3BC6140", Offset = "0x3BC6140", VA = "0x3BC6140")]
	public FileBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[Token(Token = "0x6002362")]
	[Address(RVA = "0x3BC6170", Offset = "0x3BC6170", VA = "0x3BC6170", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002363")]
	[Address(RVA = "0x3BC6410", Offset = "0x3BC6410", VA = "0x3BC6410")]
	private string FindResourceFile(CultureInfo culture, string fileName)
	{
		return null;
	}

	[Token(Token = "0x6002364")]
	[Address(RVA = "0x3BC64C0", Offset = "0x3BC64C0", VA = "0x3BC64C0")]
	private ResourceSet CreateResourceSet(string file)
	{
		return null;
	}
}
