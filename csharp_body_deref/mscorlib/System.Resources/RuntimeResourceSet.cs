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
	[Address(RVA = "0x4EDED20", Offset = "0x4EDED20", VA = "0x4EDED20")]
	internal RuntimeResourceSet(string fileName)
	{
	}

	[Token(Token = "0x6002348")]
	[Address(RVA = "0x4EDEE70", Offset = "0x4EDEE70", VA = "0x4EDEE70")]
	internal RuntimeResourceSet(Stream stream)
	{
	}

	[Token(Token = "0x6002349")]
	[Address(RVA = "0x4EDEF90", Offset = "0x4EDEF90", VA = "0x4EDEF90", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600234A")]
	[Address(RVA = "0x4EDF130", Offset = "0x4EDF130", VA = "0x4EDF130", Slot = "7")]
	public override IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600234B")]
	[Address(RVA = "0x4EDF240", Offset = "0x4EDF240", VA = "0x4EDF240", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600234C")]
	[Address(RVA = "0x4EDF140", Offset = "0x4EDF140", VA = "0x4EDF140")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x600234D")]
	[Address(RVA = "0x4EDF250", Offset = "0x4EDF250", VA = "0x4EDF250", Slot = "8")]
	public override string GetString(string key)
	{
		return null;
	}

	[Token(Token = "0x600234E")]
	[Address(RVA = "0x4EDFE20", Offset = "0x4EDFE20", VA = "0x4EDFE20", Slot = "9")]
	public override string GetString(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x600234F")]
	[Address(RVA = "0x4EDFE50", Offset = "0x4EDFE50", VA = "0x4EDFE50", Slot = "10")]
	public override object GetObject(string key)
	{
		return null;
	}

	[Token(Token = "0x6002350")]
	[Address(RVA = "0x4EDFE60", Offset = "0x4EDFE60", VA = "0x4EDFE60", Slot = "11")]
	public override object GetObject(string key, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002351")]
	[Address(RVA = "0x4EDF280", Offset = "0x4EDF280", VA = "0x4EDF280")]
	private object GetObject(string key, bool ignoreCase, bool isString)
	{
		return null;
	}

	[Token(Token = "0x6002352")]
	[Address(RVA = "0x4EDFE70", Offset = "0x4EDFE70", VA = "0x4EDFE70")]
	private object ResolveResourceLocator(System.Resources.ResourceLocator resLocation, string key, Dictionary<string, System.Resources.ResourceLocator> copyOfCache, bool keyInWrongCase)
	{
		return null;
	}
}
