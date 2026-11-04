// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.RuntimeResourceSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004E2")]
internal sealed class RuntimeResourceSet : ResourceSet, IEnumerable
{
	[Token(Token = "0x4001367")]
	internal const int Version = 2;

	[Token(Token = "0x4001368")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, System.Resources.ResourceLocator> _resCache;

	[Token(Token = "0x4001369")]
	[FieldOffset(Offset = "0x30")]
	private ResourceReader _defaultReader;

	[Token(Token = "0x400136A")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<string, System.Resources.ResourceLocator> _caseInsensitiveTable;

	[Token(Token = "0x400136B")]
	[FieldOffset(Offset = "0x40")]
	private bool _haveReadFromReader;

	[Token(Token = "0x60023C9")]
	[Address(RVA = "0x1A55710", Offset = "0x1A53D10", VA = "0x181A55710")]
	internal RuntimeResourceSet(string fileName)
	{
	}

	[Token(Token = "0x60023CA")]
	[Address(RVA = "0x1A55610", Offset = "0x1A53C10", VA = "0x181A55610")]
	internal RuntimeResourceSet(Stream stream)
	{
	}

	[Token(Token = "0x60023CB")]
	[Address(RVA = "0x1A54710", Offset = "0x1A52D10", VA = "0x181A54710", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60023CC")]
	[Address(RVA = "0x1A548F0", Offset = "0x1A52EF0", VA = "0x181A548F0", Slot = "7")]
	public override IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023CD")]
	[Address(RVA = "0x1A548F0", Offset = "0x1A52EF0", VA = "0x181A548F0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023CE")]
	[Address(RVA = "0x1A54850", Offset = "0x1A52E50", VA = "0x181A54850")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x1A55420", Offset = "0x1A53A20", VA = "0x181A55420", Slot = "8")]
	public override string GetString(string key)
	{
		return null;
	}

	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x1A553E0", Offset = "0x1A539E0", VA = "0x181A553E0", Slot = "9")]
	public override string GetString(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x1A54900", Offset = "0x1A52F00", VA = "0x181A54900", Slot = "10")]
	public override object GetObject(string key)
	{
		return null;
	}

	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x1A553C0", Offset = "0x1A539C0", VA = "0x181A553C0", Slot = "11")]
	public override object GetObject(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x1A54920", Offset = "0x1A52F20", VA = "0x181A54920")]
	private object GetObject(string key, bool ignoreCase, bool isString)
	{
		return null;
	}

	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x1A55460", Offset = "0x1A53A60", VA = "0x181A55460")]
	private object ResolveResourceLocator(System.Resources.ResourceLocator resLocation, string key, Dictionary<string, System.Resources.ResourceLocator> copyOfCache, bool keyInWrongCase)
	{
		return null;
	}
}
