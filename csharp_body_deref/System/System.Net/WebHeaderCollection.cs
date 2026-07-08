using System.Collections;
using System.Collections.Specialized;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000151")]
[ComVisible(true)]
[DefaultMember("Item")]
public class WebHeaderCollection : NameValueCollection, ISerializable
{
	[Token(Token = "0x2000152")]
	private enum RfcChar : byte
	{
		[Token(Token = "0x40006D4")]
		High,
		[Token(Token = "0x40006D5")]
		Reg,
		[Token(Token = "0x40006D6")]
		Ctl,
		[Token(Token = "0x40006D7")]
		CR,
		[Token(Token = "0x40006D8")]
		LF,
		[Token(Token = "0x40006D9")]
		WS,
		[Token(Token = "0x40006DA")]
		Colon,
		[Token(Token = "0x40006DB")]
		Delim
	}

	[Token(Token = "0x40006CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HeaderInfoTable HInfo;

	[Token(Token = "0x40006CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string[] m_CommonHeaders;

	[Token(Token = "0x40006CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int m_NumCommonHeaders;

	[Token(Token = "0x40006CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly string[] s_CommonHeaderNames;

	[Token(Token = "0x40006CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly sbyte[] s_CommonHeaderHints;

	[Token(Token = "0x40006CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameValueCollection m_InnerCollection;

	[Token(Token = "0x40006D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private WebHeaderCollectionType m_Type;

	[Token(Token = "0x40006D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly char[] HttpTrimCharacters;

	[Token(Token = "0x40006D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static RfcChar[] RfcCharMap;

	[Token(Token = "0x170001C3")]
	private NameValueCollection InnerCollection
	{
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x463B500", Offset = "0x463B500", VA = "0x463B500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	private bool AllowHttpRequestHeader
	{
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x463B790", Offset = "0x463B790", VA = "0x463B790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C5")]
	public override int Count
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x463D790", Offset = "0x463D790", VA = "0x463D790", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C6")]
	public override string[] AllKeys
	{
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x463D840", Offset = "0x463D840", VA = "0x463D840", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x463B3D0", Offset = "0x463B3D0", VA = "0x463B3D0")]
	private void NormalizeCommonHeaders()
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x463B5B0", Offset = "0x463B5B0", VA = "0x463B5B0")]
	internal static bool AllowMultiValues(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x463B7C0", Offset = "0x463B7C0", VA = "0x463B7C0")]
	public void Remove(HttpRequestHeader header)
	{
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x463B9D0", Offset = "0x463B9D0", VA = "0x463B9D0")]
	internal void AddInternal(string name, string value)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x463BA30", Offset = "0x463BA30", VA = "0x463BA30")]
	internal void ChangeInternal(string name, string value)
	{
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x463BA90", Offset = "0x463BA90", VA = "0x463BA90")]
	internal void RemoveInternal(string name)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x463BAF0", Offset = "0x463BAF0", VA = "0x463BAF0")]
	internal static string CheckBadChars(string name, bool isHeaderValue)
	{
		return null;
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x463BE60", Offset = "0x463BE60", VA = "0x463BE60")]
	internal static bool ContainsNonAsciiChars(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x463BEB0", Offset = "0x463BEB0", VA = "0x463BEB0")]
	internal void ThrowOnRestrictedHeader(string headerName)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x463C020", Offset = "0x463C020", VA = "0x463C020", Slot = "15")]
	public override void Add(string name, string value)
	{
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x463C1C0", Offset = "0x463C1C0", VA = "0x463C1C0")]
	public void Add(string header)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x463C470", Offset = "0x463C470", VA = "0x463C470", Slot = "18")]
	public override void Set(string name, string value)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x463C670", Offset = "0x463C670", VA = "0x463C670")]
	internal void SetInternal(string name, string value)
	{
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x463C870", Offset = "0x463C870", VA = "0x463C870", Slot = "19")]
	public override void Remove(string name)
	{
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x463C990", Offset = "0x463C990", VA = "0x463C990", Slot = "17")]
	public override string[] GetValues(string header)
	{
		return null;
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x463CBA0", Offset = "0x463CBA0", VA = "0x463CBA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x463CBF0", Offset = "0x463CBF0", VA = "0x463CBF0")]
	internal static string GetAsString(NameValueCollection cc, bool winInetCompat, bool forTrace)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x463CF20", Offset = "0x463CF20", VA = "0x463CF20")]
	public WebHeaderCollection()
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x463CF80", Offset = "0x463CF80", VA = "0x463CF80")]
	internal WebHeaderCollection(WebHeaderCollectionType type)
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x463D060", Offset = "0x463D060", VA = "0x463D060")]
	protected WebHeaderCollection(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x463D220", Offset = "0x463D220", VA = "0x463D220", Slot = "12")]
	public override void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x463D230", Offset = "0x463D230", VA = "0x463D230", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x463D3C0", Offset = "0x463D3C0", VA = "0x463D3C0", Slot = "9")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x463D3E0", Offset = "0x463D3E0", VA = "0x463D3E0", Slot = "16")]
	public override string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x463D730", Offset = "0x463D730", VA = "0x463D730", Slot = "13")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x463D7C0", Offset = "0x463D7C0", VA = "0x463D7C0", Slot = "20")]
	public override string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x463D800", Offset = "0x463D800", VA = "0x463D800", Slot = "21")]
	public override string GetKey(int index)
	{
		return null;
	}
}
