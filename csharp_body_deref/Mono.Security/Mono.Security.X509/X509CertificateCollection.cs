// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509CertificateCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Serializable]
[Token(Token = "0x2000012")]
public class X509CertificateCollection : CollectionBase, IEnumerable
{
	[Token(Token = "0x2000013")]
	public class X509CertificateEnumerator : IEnumerator
	{
		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x10")]
		private IEnumerator enumerator;

		[Token(Token = "0x1700003B")]
		public X509Certificate Current
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x52B35D0", Offset = "0x52B25D0", VA = "0x52B35D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x52BF310", Offset = "0x52BE310", VA = "0x52BF310", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x52BF190", Offset = "0x52BE190", VA = "0x52BF190")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x52BF3B0", Offset = "0x52BE3B0", VA = "0x52BF3B0", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x52BF440", Offset = "0x52BE440", VA = "0x52BF440", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x52B3AD0", Offset = "0x52B2AD0", VA = "0x52B3AD0")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x52BEDA0", Offset = "0x52BDDA0", VA = "0x52BEDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x52AEBF0", Offset = "0x52ADBF0", VA = "0x52AEBF0")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x52AED80", Offset = "0x52ADD80", VA = "0x52AED80")]
	public int Add(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x52BEE30", Offset = "0x52BDE30", VA = "0x52BEE30")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x52BEF60", Offset = "0x52BDF60", VA = "0x52BEF60")]
	public bool Contains(X509Certificate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x52B3580", Offset = "0x52B2580", VA = "0x52B3580")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x52BF250", Offset = "0x52BE250", VA = "0x52BF250", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x52BF280", Offset = "0x52BE280", VA = "0x52BF280", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x52BEF70", Offset = "0x52BDF70", VA = "0x52BEF70")]
	public int IndexOf(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x52BF2B0", Offset = "0x52BE2B0", VA = "0x52BF2B0")]
	private bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}
}
