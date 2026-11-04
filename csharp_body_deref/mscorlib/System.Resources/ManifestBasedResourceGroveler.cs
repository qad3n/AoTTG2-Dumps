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

[Token(Token = "0x20004E8")]
internal class ManifestBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x4001372")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ManifestBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023E9")]
	[Address(RVA = "0x1A47D40", Offset = "0x1A46340", VA = "0x181A47D40", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023EA")]
	[Address(RVA = "0x1A48860", Offset = "0x1A46E60", VA = "0x181A48860")]
	private CultureInfo UltimateFallbackFixup(CultureInfo lookForCulture)
	{
		return null;
	}

	[Token(Token = "0x60023EB")]
	[Address(RVA = "0x1A477D0", Offset = "0x1A45DD0", VA = "0x181A477D0")]
	internal static CultureInfo GetNeutralResourcesLanguage(Assembly a, ref UltimateResourceFallbackLocation fallbackLocation)
	{
		return null;
	}

	[Token(Token = "0x60023EC")]
	[Address(RVA = "0x1A46B40", Offset = "0x1A45140", VA = "0x181A46B40")]
	internal ResourceSet CreateResourceSet(Stream store, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x1A47600", Offset = "0x1A45C00", VA = "0x181A47600")]
	private Stream GetManifestResourceStream(System.Reflection.RuntimeAssembly satellite, string fileName, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x1A466B0", Offset = "0x1A44CB0", VA = "0x181A466B0")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(System.Reflection.RuntimeAssembly satellite, string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x1A47B70", Offset = "0x1A46170", VA = "0x181A47B70")]
	private System.Reflection.RuntimeAssembly GetSatelliteAssembly(CultureInfo lookForCulture, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x1A46530", Offset = "0x1A44B30", VA = "0x181A46530")]
	private bool CanUseDefaultResourceClasses(string readerTypeName, string resSetTypeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60023F1")]
	[Address(RVA = "0x1A47AF0", Offset = "0x1A460F0", VA = "0x181A47AF0")]
	private string GetSatelliteAssemblyName()
	{
		return null;
	}

	[Token(Token = "0x60023F2")]
	[Address(RVA = "0x1A484B0", Offset = "0x1A46AB0", VA = "0x181A484B0")]
	private void HandleSatelliteMissing()
	{
	}

	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x1A48200", Offset = "0x1A46800", VA = "0x181A48200")]
	private void HandleResourceStreamMissing(string fileName)
	{
	}

	[Token(Token = "0x60023F4")]
	[Address(RVA = "0x1A47740", Offset = "0x1A45D40", VA = "0x181A47740")]
	private static bool GetNeutralResourcesLanguageAttribute(Assembly assembly, ref string cultureName, ref short fallbackLocation)
	{
		return default(bool);
	}
}
