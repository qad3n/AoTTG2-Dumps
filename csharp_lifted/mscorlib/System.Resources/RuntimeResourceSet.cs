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

[Token(Token = "0x20004BB")]
internal sealed class RuntimeResourceSet : ResourceSet, IEnumerable
{
	[Token(Token = "0x40012C7")]
	internal const int Version = 2;

	[Token(Token = "0x40012C8")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, System.Resources.ResourceLocator> _resCache;

	[Token(Token = "0x40012C9")]
	[FieldOffset(Offset = "0x30")]
	private ResourceReader _defaultReader;

	[Token(Token = "0x40012CA")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<string, System.Resources.ResourceLocator> _caseInsensitiveTable;

	[Token(Token = "0x40012CB")]
	[FieldOffset(Offset = "0x40")]
	private bool _haveReadFromReader;

	[Token(Token = "0x6002397")]
	[Address(RVA = "0x53CC290", Offset = "0x53CB290", VA = "0x53CC290")]
	internal RuntimeResourceSet(string fileName)
	{
	}

	[Token(Token = "0x6002398")]
	[Address(RVA = "0x53CC3E0", Offset = "0x53CB3E0", VA = "0x53CC3E0")]
	internal RuntimeResourceSet(Stream stream)
	{
	}

	[Token(Token = "0x6002399")]
	[Address(RVA = "0x53CC500", Offset = "0x53CB500", VA = "0x53CC500", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600239A")]
	[Address(RVA = "0x53CC680", Offset = "0x53CB680", VA = "0x53CC680", Slot = "7")]
	public override IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600239B")]
	[Address(RVA = "0x53CC780", Offset = "0x53CB780", VA = "0x53CC780", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600239C")]
	[Address(RVA = "0x53CC690", Offset = "0x53CB690", VA = "0x53CC690")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x600239D")]
	[Address(RVA = "0x53CC790", Offset = "0x53CB790", VA = "0x53CC790", Slot = "8")]
	public override string GetString(string key)
	{
		return null;
	}

	[Token(Token = "0x600239E")]
	[Address(RVA = "0x53CD190", Offset = "0x53CC190", VA = "0x53CD190", Slot = "9")]
	public override string GetString(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x600239F")]
	[Address(RVA = "0x53CD1C0", Offset = "0x53CC1C0", VA = "0x53CD1C0", Slot = "10")]
	public override object GetObject(string key)
	{
		return null;
	}

	[Token(Token = "0x60023A0")]
	[Address(RVA = "0x53CD1D0", Offset = "0x53CC1D0", VA = "0x53CD1D0", Slot = "11")]
	public override object GetObject(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023A1")]
	[Address(RVA = "0x53CC7C0", Offset = "0x53CB7C0", VA = "0x53CC7C0")]
	private object GetObject(string key, bool ignoreCase, bool isString)
	{
		return null;
	}

	[Token(Token = "0x60023A2")]
	[Address(RVA = "0x53CD1E0", Offset = "0x53CC1E0", VA = "0x53CD1E0")]
	private object ResolveResourceLocator(System.Resources.ResourceLocator resLocation, string key, Dictionary<string, System.Resources.ResourceLocator> copyOfCache, bool keyInWrongCase)
	{
		return null;
	}
}
