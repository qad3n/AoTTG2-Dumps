// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FB")]
public sealed class X509Certificate2Enumerator : IEnumerator
{
	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x1700011D")]
	public X509Certificate2 Current
	{
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x62125D0", Offset = "0x62115D0", VA = "0x62125D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x6212740", Offset = "0x6211740", VA = "0x6212740", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x6212470", Offset = "0x6211470", VA = "0x6212470")]
	internal X509Certificate2Enumerator(X509Certificate2Collection collection)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x62126B0", Offset = "0x62116B0", VA = "0x62126B0")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x62127E0", Offset = "0x62117E0", VA = "0x62127E0", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x6212870", Offset = "0x6211870", VA = "0x6212870", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
