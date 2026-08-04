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

[Token(Token = "0x20004B2")]
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

	[Token(Token = "0x6002347")]
	[Address(RVA = "0x3BC4840", Offset = "0x3BC4840", VA = "0x3BC4840")]
	internal RuntimeResourceSet(string fileName)
	{
	}

	[Token(Token = "0x6002348")]
	[Address(RVA = "0x3BC4990", Offset = "0x3BC4990", VA = "0x3BC4990")]
	internal RuntimeResourceSet(Stream stream)
	{
	}

	[Token(Token = "0x6002349")]
	[Address(RVA = "0x3BC4AB0", Offset = "0x3BC4AB0", VA = "0x3BC4AB0", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600234A")]
	[Address(RVA = "0x3BC4C50", Offset = "0x3BC4C50", VA = "0x3BC4C50", Slot = "7")]
	public override IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600234B")]
	[Address(RVA = "0x3BC4D60", Offset = "0x3BC4D60", VA = "0x3BC4D60", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600234C")]
	[Address(RVA = "0x3BC4C60", Offset = "0x3BC4C60", VA = "0x3BC4C60")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x600234D")]
	[Address(RVA = "0x3BC4D70", Offset = "0x3BC4D70", VA = "0x3BC4D70", Slot = "8")]
	public override string GetString(string key)
	{
		return null;
	}

	[Token(Token = "0x600234E")]
	[Address(RVA = "0x3BC5940", Offset = "0x3BC5940", VA = "0x3BC5940", Slot = "9")]
	public override string GetString(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x600234F")]
	[Address(RVA = "0x3BC5970", Offset = "0x3BC5970", VA = "0x3BC5970", Slot = "10")]
	public override object GetObject(string key)
	{
		return null;
	}

	[Token(Token = "0x6002350")]
	[Address(RVA = "0x3BC5980", Offset = "0x3BC5980", VA = "0x3BC5980", Slot = "11")]
	public override object GetObject(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002351")]
	[Address(RVA = "0x3BC4DA0", Offset = "0x3BC4DA0", VA = "0x3BC4DA0")]
	private object GetObject(string key, bool ignoreCase, bool isString)
	{
		return null;
	}

	[Token(Token = "0x6002352")]
	[Address(RVA = "0x3BC5990", Offset = "0x3BC5990", VA = "0x3BC5990")]
	private object ResolveResourceLocator(System.Resources.ResourceLocator resLocation, string key, Dictionary<string, System.Resources.ResourceLocator> copyOfCache, bool keyInWrongCase)
	{
		return null;
	}
}
