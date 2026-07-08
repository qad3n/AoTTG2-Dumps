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
			[Address(RVA = "0x3A39090", Offset = "0x3A39090", VA = "0x3A39090")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x3A467E0", Offset = "0x3A467E0", VA = "0x3A467E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3A46660", Offset = "0x3A46660", VA = "0x3A46660")]
		public X509CertificateEnumerator(X509CertificateCollection mappings)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3A46880", Offset = "0x3A46880", VA = "0x3A46880", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3A46910", Offset = "0x3A46910", VA = "0x3A46910", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3A398A0", Offset = "0x3A398A0", VA = "0x3A398A0")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public X509Certificate this[int index]
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3A46260", Offset = "0x3A46260", VA = "0x3A46260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3A33F50", Offset = "0x3A33F50", VA = "0x3A33F50")]
	public X509CertificateCollection()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3A340F0", Offset = "0x3A340F0", VA = "0x3A340F0")]
	public int Add(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3A462F0", Offset = "0x3A462F0", VA = "0x3A462F0")]
	public void AddRange(X509CertificateCollection value)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3A46430", Offset = "0x3A46430", VA = "0x3A46430")]
	public bool Contains(X509Certificate value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3A39040", Offset = "0x3A39040", VA = "0x3A39040")]
	public new X509CertificateEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3A46720", Offset = "0x3A46720", VA = "0x3A46720", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3A46750", Offset = "0x3A46750", VA = "0x3A46750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3A46440", Offset = "0x3A46440", VA = "0x3A46440")]
	public int IndexOf(X509Certificate value)
	{
		return default(int);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3A46780", Offset = "0x3A46780", VA = "0x3A46780")]
	private bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}
}
