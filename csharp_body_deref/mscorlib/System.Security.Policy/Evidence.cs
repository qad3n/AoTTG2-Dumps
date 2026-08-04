// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Policy.Evidence
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Policy;

[Serializable]
[Token(Token = "0x20002B3")]
[ComVisible(true)]
[System.MonoTODO("Serialization format not compatible with .NET")]
public sealed class Evidence : ICollection, IEnumerable
{
	[Token(Token = "0x20002B4")]
	private class EvidenceEnumerator : IEnumerator
	{
		[Token(Token = "0x4000C58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IEnumerator currentEnum;

		[Token(Token = "0x4000C59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IEnumerator hostEnum;

		[Token(Token = "0x4000C5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IEnumerator assemblyEnum;

		[Token(Token = "0x1700026C")]
		public object Current
		{
			[Token(Token = "0x60017E6")]
			[Address(RVA = "0x3B23850", Offset = "0x3B23850", VA = "0x3B23850", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x3B23570", Offset = "0x3B23570", VA = "0x3B23570")]
		public EvidenceEnumerator(IEnumerator hostenum, IEnumerator assemblyenum)
		{
		}

		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x3B235C0", Offset = "0x3B235C0", VA = "0x3B235C0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017E5")]
		[Address(RVA = "0x3B23710", Offset = "0x3B23710", VA = "0x3B23710", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000C55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _locked;

	[Token(Token = "0x4000C56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList hostEvidenceList;

	[Token(Token = "0x4000C57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayList assemblyEvidenceList;

	[Token(Token = "0x17000269")]
	[Obsolete]
	public int Count
	{
		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x3B23360", Offset = "0x3B23360", VA = "0x3B23360", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026A")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x3B233C0", Offset = "0x3B233C0", VA = "0x3B233C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public object SyncRoot
	{
		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x3B233D0", Offset = "0x3B233D0", VA = "0x3B233D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x3B23350", Offset = "0x3B23350", VA = "0x3B23350")]
	public Evidence()
	{
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x3B233E0", Offset = "0x3B233E0", VA = "0x3B233E0", Slot = "4")]
	[Obsolete]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x3B234A0", Offset = "0x3B234A0", VA = "0x3B234A0", Slot = "8")]
	[Obsolete]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
