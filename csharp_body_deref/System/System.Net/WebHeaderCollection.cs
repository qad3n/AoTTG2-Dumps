// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebHeaderCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Specialized;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002D9")]
[DefaultMember("Item")]
[ComVisible(true)]
public class WebHeaderCollection : NameValueCollection, ISerializable
{
	[Token(Token = "0x20002DA")]
	private enum RfcChar : byte
	{
		[Token(Token = "0x4000AEA")]
		High,
		[Token(Token = "0x4000AEB")]
		Reg,
		[Token(Token = "0x4000AEC")]
		Ctl,
		[Token(Token = "0x4000AED")]
		CR,
		[Token(Token = "0x4000AEE")]
		LF,
		[Token(Token = "0x4000AEF")]
		WS,
		[Token(Token = "0x4000AF0")]
		Colon,
		[Token(Token = "0x4000AF1")]
		Delim
	}

	[Token(Token = "0x4000AE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HeaderInfoTable HInfo;

	[Token(Token = "0x4000AE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string[] m_CommonHeaders;

	[Token(Token = "0x4000AE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int m_NumCommonHeaders;

	[Token(Token = "0x4000AE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly string[] s_CommonHeaderNames;

	[Token(Token = "0x4000AE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly sbyte[] s_CommonHeaderHints;

	[Token(Token = "0x4000AE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameValueCollection m_InnerCollection;

	[Token(Token = "0x4000AE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private WebHeaderCollectionType m_Type;

	[Token(Token = "0x4000AE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly char[] HttpTrimCharacters;

	[Token(Token = "0x4000AE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static RfcChar[] RfcCharMap;

	[Token(Token = "0x17000418")]
	private NameValueCollection InnerCollection
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x27D7FB0", Offset = "0x27D65B0", VA = "0x1827D7FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000419")]
	private bool AllowHttpRequestHeader
	{
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x27D7F40", Offset = "0x27D6540", VA = "0x1827D7F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700041A")]
	public override int Count
	{
		[Token(Token = "0x60013E9")]
		[Address(RVA = "0x27D7F70", Offset = "0x27D6570", VA = "0x1827D7F70", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700041B")]
	public override string[] AllKeys
	{
		[Token(Token = "0x60013EC")]
		[Address(RVA = "0x27D7F00", Offset = "0x27D6500", VA = "0x1827D7F00", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x27D6BD0", Offset = "0x27D51D0", VA = "0x1827D6BD0")]
	private void NormalizeCommonHeaders()
	{
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x27D5A20", Offset = "0x27D4020", VA = "0x1827D5A20")]
	internal static bool AllowMultiValues(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x27D6D60", Offset = "0x27D5360", VA = "0x1827D6D60")]
	public void Remove(HttpRequestHeader header)
	{
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x27D5520", Offset = "0x27D3B20", VA = "0x1827D5520")]
	internal void AddInternal(string name, string value)
	{
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x27D5AC0", Offset = "0x27D40C0", VA = "0x1827D5AC0")]
	internal void ChangeInternal(string name, string value)
	{
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x27D6D00", Offset = "0x27D5300", VA = "0x1827D6D00")]
	internal void RemoveInternal(string name)
	{
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x27D5B30", Offset = "0x27D4130", VA = "0x1827D5B30")]
	internal static string CheckBadChars(string name, bool isHeaderValue)
	{
		return null;
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x27D60C0", Offset = "0x27D46C0", VA = "0x1827D60C0")]
	internal static bool ContainsNonAsciiChars(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x27D73E0", Offset = "0x27D59E0", VA = "0x1827D73E0")]
	internal void ThrowOnRestrictedHeader(string headerName)
	{
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x27D5590", Offset = "0x27D3B90", VA = "0x1827D5590", Slot = "15")]
	public override void Add(string name, string value)
	{
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x27D5740", Offset = "0x27D3D40", VA = "0x1827D5740")]
	public void Add(string header)
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x27D71A0", Offset = "0x27D57A0", VA = "0x1827D71A0", Slot = "18")]
	public override void Set(string name, string value)
	{
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x27D6F70", Offset = "0x27D5570", VA = "0x1827D6F70")]
	internal void SetInternal(string name, string value)
	{
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x27D6E50", Offset = "0x27D5450", VA = "0x1827D6E50", Slot = "19")]
	public override void Remove(string name)
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x27D6600", Offset = "0x27D4C00", VA = "0x1827D6600", Slot = "17")]
	public override string[] GetValues(string header)
	{
		return null;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x27D7620", Offset = "0x27D5C20", VA = "0x1827D7620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60013E0")]
	[Address(RVA = "0x27D6130", Offset = "0x27D4730", VA = "0x1827D6130")]
	internal static string GetAsString(NameValueCollection cc, bool winInetCompat, bool forTrace)
	{
		return null;
	}

	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x27D7DB0", Offset = "0x27D63B0", VA = "0x1827D7DB0")]
	public WebHeaderCollection()
	{
	}

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x27D7E10", Offset = "0x27D6410", VA = "0x1827D7E10")]
	internal WebHeaderCollection(WebHeaderCollectionType type)
	{
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x27D7BD0", Offset = "0x27D61D0", VA = "0x1827D7BD0")]
	protected WebHeaderCollection(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	public override void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x27D6480", Offset = "0x27D4A80", VA = "0x1827D6480", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x27D5090", Offset = "0x27D3690", VA = "0x1827D5090", Slot = "9")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x27D6830", Offset = "0x27D4E30", VA = "0x1827D6830", Slot = "16")]
	public override string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x27D63C0", Offset = "0x27D49C0", VA = "0x1827D63C0", Slot = "13")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x27D6B80", Offset = "0x27D5180", VA = "0x1827D6B80", Slot = "20")]
	public override string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x27D6430", Offset = "0x27D4A30", VA = "0x1827D6430", Slot = "21")]
	public override string GetKey(int index)
	{
		return null;
	}
}
