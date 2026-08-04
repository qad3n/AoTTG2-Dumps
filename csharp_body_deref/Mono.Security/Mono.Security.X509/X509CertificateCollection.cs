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
			[Address(RVA = "0x3AA5D50", Offset = "0x3AA5D50", VA = "0x3AA5D50")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x3AB34A0", Offset = "0x3AB34A0", VA = "0x3AB34A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3AB3320", Offset = "0x3AB3320", VA = "0x3AB3320")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3AB3540", Offset = "0x3AB3540", VA = "0x3AB3540", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3AB35D0", Offset = "0x3AB35D0", VA = "0x3AB35D0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3AA6560", Offset = "0x3AA6560", VA = "0x3AA6560")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3AB2F20", Offset = "0x3AB2F20", VA = "0x3AB2F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3AA0C10", Offset = "0x3AA0C10", VA = "0x3AA0C10")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3AA0DB0", Offset = "0x3AA0DB0", VA = "0x3AA0DB0")]
	public int Add(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3AB2FB0", Offset = "0x3AB2FB0", VA = "0x3AB2FB0")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3AB30F0", Offset = "0x3AB30F0", VA = "0x3AB30F0")]
	public bool Contains(X509Certificate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3AA5D00", Offset = "0x3AA5D00", VA = "0x3AA5D00")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3AB33E0", Offset = "0x3AB33E0", VA = "0x3AB33E0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3AB3410", Offset = "0x3AB3410", VA = "0x3AB3410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3AB3100", Offset = "0x3AB3100", VA = "0x3AB3100")]
	public int IndexOf(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3AB3440", Offset = "0x3AB3440", VA = "0x3AB3440")]
	private bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}
}
