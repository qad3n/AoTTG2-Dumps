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
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x1924760", Offset = "0x1922D60", VA = "0x181924760")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x19246A0", Offset = "0x1922CA0", VA = "0x1819246A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x19246F0", Offset = "0x1922CF0", VA = "0x1819246F0")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x1924600", Offset = "0x1922C00", VA = "0x181924600", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x1924650", Offset = "0x1922C50", VA = "0x181924650", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x19245B0", Offset = "0x1922BB0", VA = "0x1819245B0")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x1924510", Offset = "0x1922B10", VA = "0x181924510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x1924500", Offset = "0x1922B00", VA = "0x181924500")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x1924160", Offset = "0x1922760", VA = "0x181924160")]
	public int Add(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x1924000", Offset = "0x1922600", VA = "0x181924000")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x1924250", Offset = "0x1922850", VA = "0x181924250")]
	public bool Contains(X509Certificate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x1924270", Offset = "0x1922870", VA = "0x181924270")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x1924310", Offset = "0x1922910", VA = "0x181924310")]
	public int IndexOf(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x19241E0", Offset = "0x19227E0", VA = "0x1819241E0")]
	private bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}
}
