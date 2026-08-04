// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ManifestBasedResourceGroveler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004B8")]
internal class ManifestBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x4001372")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x6002366")]
	[Address(RVA = "0x3BC67B0", Offset = "0x3BC67B0", VA = "0x3BC67B0")]
	public ManifestBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002367")]
	[Address(RVA = "0x3BC67E0", Offset = "0x3BC67E0", VA = "0x3BC67E0", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002368")]
	[Address(RVA = "0x3BC6AE0", Offset = "0x3BC6AE0", VA = "0x3BC6AE0")]
	private CultureInfo UltimateFallbackFixup(CultureInfo lookForCulture)
	{
		return null;
	}

	[Token(Token = "0x6002369")]
	[Address(RVA = "0x3BC7FB0", Offset = "0x3BC7FB0", VA = "0x3BC7FB0")]
	internal static CultureInfo GetNeutralResourcesLanguage(Assembly a, ref UltimateResourceFallbackLocation fallbackLocation)
	{
		return null;
	}

	[Token(Token = "0x600236A")]
	[Address(RVA = "0x3BC72B0", Offset = "0x3BC72B0", VA = "0x3BC72B0")]
	internal ResourceSet CreateResourceSet(Stream store, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x600236B")]
	[Address(RVA = "0x3BC71E0", Offset = "0x3BC71E0", VA = "0x3BC71E0")]
	private Stream GetManifestResourceStream(System.Reflection.RuntimeAssembly satellite, string fileName, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600236C")]
	[Address(RVA = "0x3BC84E0", Offset = "0x3BC84E0", VA = "0x3BC84E0")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(System.Reflection.RuntimeAssembly satellite, string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600236D")]
	[Address(RVA = "0x3BC6BF0", Offset = "0x3BC6BF0", VA = "0x3BC6BF0")]
	private System.Reflection.RuntimeAssembly GetSatelliteAssembly(CultureInfo lookForCulture, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x600236E")]
	[Address(RVA = "0x3BC8390", Offset = "0x3BC8390", VA = "0x3BC8390")]
	private bool CanUseDefaultResourceClasses(string readerTypeName, string resSetTypeName)
	{
		return default(bool);
	}

	[Token(Token = "0x600236F")]
	[Address(RVA = "0x3BC88D0", Offset = "0x3BC88D0", VA = "0x3BC88D0")]
	private string GetSatelliteAssemblyName()
	{
		return null;
	}

	[Token(Token = "0x6002370")]
	[Address(RVA = "0x3BC6E00", Offset = "0x3BC6E00", VA = "0x3BC6E00")]
	private void HandleSatelliteMissing()
	{
	}

	[Token(Token = "0x6002371")]
	[Address(RVA = "0x3BC7CE0", Offset = "0x3BC7CE0", VA = "0x3BC7CE0")]
	private void HandleResourceStreamMissing(string fileName)
	{
	}

	[Token(Token = "0x6002372")]
	[Address(RVA = "0x3BC8320", Offset = "0x3BC8320", VA = "0x3BC8320")]
	private static bool GetNeutralResourcesLanguageAttribute(Assembly assembly, ref string cultureName, ref short fallbackLocation)
	{
		return default(bool);
	}
}
