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
[Token(Token = "0x200029A")]
[DefaultMember("Item")]
[ComVisible(true)]
public class WebHeaderCollection : NameValueCollection, ISerializable
{
	[Token(Token = "0x200029B")]
	private enum RfcChar : byte
	{
		[Token(Token = "0x4000A1B")]
		High,
		[Token(Token = "0x4000A1C")]
		Reg,
		[Token(Token = "0x4000A1D")]
		Ctl,
		[Token(Token = "0x4000A1E")]
		CR,
		[Token(Token = "0x4000A1F")]
		LF,
		[Token(Token = "0x4000A20")]
		WS,
		[Token(Token = "0x4000A21")]
		Colon,
		[Token(Token = "0x4000A22")]
		Delim
	}

	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HeaderInfoTable HInfo;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string[] m_CommonHeaders;

	[Token(Token = "0x4000A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int m_NumCommonHeaders;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly string[] s_CommonHeaderNames;

	[Token(Token = "0x4000A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly sbyte[] s_CommonHeaderHints;

	[Token(Token = "0x4000A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameValueCollection m_InnerCollection;

	[Token(Token = "0x4000A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private WebHeaderCollectionType m_Type;

	[Token(Token = "0x4000A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly char[] HttpTrimCharacters;

	[Token(Token = "0x4000A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static RfcChar[] RfcCharMap;

	[Token(Token = "0x170003E9")]
	private NameValueCollection InnerCollection
	{
		[Token(Token = "0x6001211")]
		[Address(RVA = "0x62A81A0", Offset = "0x62A71A0", VA = "0x62A81A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EA")]
	private bool AllowHttpRequestHeader
	{
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x62A8430", Offset = "0x62A7430", VA = "0x62A8430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EB")]
	public override int Count
	{
		[Token(Token = "0x600122B")]
		[Address(RVA = "0x62AA360", Offset = "0x62A9360", VA = "0x62AA360", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003EC")]
	public override string[] AllKeys
	{
		[Token(Token = "0x600122E")]
		[Address(RVA = "0x62AA410", Offset = "0x62A9410", VA = "0x62AA410", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x62A8080", Offset = "0x62A7080", VA = "0x62A8080")]
	private void NormalizeCommonHeaders()
	{
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x62A8250", Offset = "0x62A7250", VA = "0x62A8250")]
	internal static bool AllowMultiValues(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x62A8460", Offset = "0x62A7460", VA = "0x62A8460")]
	public void Remove(HttpRequestHeader header)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x62A8550", Offset = "0x62A7550", VA = "0x62A8550")]
	internal void AddInternal(string name, string value)
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x62A85B0", Offset = "0x62A75B0", VA = "0x62A85B0")]
	internal void ChangeInternal(string name, string value)
	{
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x62A8610", Offset = "0x62A7610", VA = "0x62A8610")]
	internal void RemoveInternal(string name)
	{
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x62A8670", Offset = "0x62A7670", VA = "0x62A8670")]
	internal static string CheckBadChars(string name, bool isHeaderValue)
	{
		return null;
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x62A89F0", Offset = "0x62A79F0", VA = "0x62A89F0")]
	internal static bool ContainsNonAsciiChars(string token)
	{
		return default(bool);
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x62A8A50", Offset = "0x62A7A50", VA = "0x62A8A50")]
	internal void ThrowOnRestrictedHeader(string headerName)
	{
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x62A8BC0", Offset = "0x62A7BC0", VA = "0x62A8BC0", Slot = "15")]
	public override void Add(string name, string value)
	{
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x62A8D60", Offset = "0x62A7D60", VA = "0x62A8D60")]
	public void Add(string header)
	{
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x62A9030", Offset = "0x62A8030", VA = "0x62A9030", Slot = "18")]
	public override void Set(string name, string value)
	{
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x62A9260", Offset = "0x62A8260", VA = "0x62A9260")]
	internal void SetInternal(string name, string value)
	{
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x62A9480", Offset = "0x62A8480", VA = "0x62A9480", Slot = "19")]
	public override void Remove(string name)
	{
	}

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x62A95C0", Offset = "0x62A85C0", VA = "0x62A95C0", Slot = "17")]
	public override string[] GetValues(string header)
	{
		return null;
	}

	[Token(Token = "0x6001221")]
	[Address(RVA = "0x62A97D0", Offset = "0x62A87D0", VA = "0x62A97D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x62A9820", Offset = "0x62A8820", VA = "0x62A9820")]
	internal static string GetAsString(NameValueCollection cc, bool winInetCompat, bool forTrace)
	{
		return null;
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x62A4FA0", Offset = "0x62A3FA0", VA = "0x62A4FA0")]
	public WebHeaderCollection()
	{
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x62A9B60", Offset = "0x62A8B60", VA = "0x62A9B60")]
	internal WebHeaderCollection(WebHeaderCollectionType type)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x62A9C40", Offset = "0x62A8C40", VA = "0x62A9C40")]
	protected WebHeaderCollection(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x62A9E00", Offset = "0x62A8E00", VA = "0x62A9E00", Slot = "12")]
	public override void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x62A9E10", Offset = "0x62A8E10", VA = "0x62A9E10", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x62A9F90", Offset = "0x62A8F90", VA = "0x62A9F90", Slot = "9")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x62A9FB0", Offset = "0x62A8FB0", VA = "0x62A9FB0", Slot = "16")]
	public override string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x62AA300", Offset = "0x62A9300", VA = "0x62AA300", Slot = "13")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x62AA390", Offset = "0x62A9390", VA = "0x62AA390", Slot = "20")]
	public override string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x62AA3D0", Offset = "0x62A93D0", VA = "0x62AA3D0", Slot = "21")]
	public override string GetKey(int index)
	{
		return null;
	}
}
