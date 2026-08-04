// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPath.XPathNodeIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Xml.XPath;

[Token(Token = "0x20000FD")]
[DebuggerDisplay("Position={CurrentPosition}, Current={debuggerDisplayProxy}")]
public abstract class XPathNodeIterator : ICloneable, IEnumerable
{
	[Token(Token = "0x20000FE")]
	private class Enumerator : IEnumerator
	{
		[Token(Token = "0x40005E2")]
		[FieldOffset(Offset = "0x10")]
		private XPathNodeIterator original;

		[Token(Token = "0x40005E3")]
		[FieldOffset(Offset = "0x18")]
		private XPathNodeIterator current;

		[Token(Token = "0x40005E4")]
		[FieldOffset(Offset = "0x20")]
		private bool iterationStarted;

		[Token(Token = "0x1700032F")]
		public virtual object Current
		{
			[Token(Token = "0x6000CA6")]
			[Address(RVA = "0x4808210", Offset = "0x4808210", VA = "0x4808210", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CA5")]
		[Address(RVA = "0x48081B0", Offset = "0x48081B0", VA = "0x48081B0")]
		public Enumerator(XPathNodeIterator original)
		{
		}

		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x4808370", Offset = "0x4808370", VA = "0x4808370", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CA8")]
		[Address(RVA = "0x4808400", Offset = "0x4808400", VA = "0x4808400", Slot = "9")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x10")]
	internal int count;

	[Token(Token = "0x1700032C")]
	public abstract XPathNavigator Current
	{
		[Token(Token = "0x6000CA0")]
		get;
	}

	[Token(Token = "0x1700032D")]
	public abstract int CurrentPosition
	{
		[Token(Token = "0x6000CA1")]
		get;
	}

	[Token(Token = "0x1700032E")]
	public virtual int Count
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x48080C0", Offset = "0x48080C0", VA = "0x48080C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x48080A0", Offset = "0x48080A0", VA = "0x48080A0", Slot = "4")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000C9E")]
	public abstract XPathNodeIterator Clone();

	[Token(Token = "0x6000C9F")]
	public abstract bool MoveNext();

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x4808130", Offset = "0x4808130", VA = "0x4808130", Slot = "11")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x4808200", Offset = "0x4808200", VA = "0x4808200")]
	protected XPathNodeIterator()
	{
	}
}
