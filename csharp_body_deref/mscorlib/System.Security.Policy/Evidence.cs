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
[Token(Token = "0x20002E2")]
[ComVisible(true)]
[System.MonoTODO("Serialization format not compatible with .NET")]
public sealed class Evidence : ICollection, IEnumerable
{
	[Token(Token = "0x20002E3")]
	private class EvidenceEnumerator : IEnumerator
	{
		[Token(Token = "0x4000C65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IEnumerator currentEnum;

		[Token(Token = "0x4000C66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IEnumerator hostEnum;

		[Token(Token = "0x4000C67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IEnumerator assemblyEnum;

		[Token(Token = "0x1700026E")]
		public object Current
		{
			[Token(Token = "0x600184E")]
			[Address(RVA = "0x19921E0", Offset = "0x19907E0", VA = "0x1819921E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600184B")]
		[Address(RVA = "0x1992180", Offset = "0x1990780", VA = "0x181992180")]
		public EvidenceEnumerator(IEnumerator hostenum, IEnumerator assemblyenum)
		{
		}

		[Token(Token = "0x600184C")]
		[Address(RVA = "0x1992060", Offset = "0x1990660", VA = "0x181992060", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600184D")]
		[Address(RVA = "0x19920F0", Offset = "0x19906F0", VA = "0x1819920F0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000C62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _locked;

	[Token(Token = "0x4000C63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList hostEvidenceList;

	[Token(Token = "0x4000C64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayList assemblyEvidenceList;

	[Token(Token = "0x1700026B")]
	[Obsolete]
	public int Count
	{
		[Token(Token = "0x6001846")]
		[Address(RVA = "0x19923B0", Offset = "0x19909B0", VA = "0x1819923B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026C")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001847")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026D")]
	public object SyncRoot
	{
		[Token(Token = "0x6001848")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Evidence()
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x1992230", Offset = "0x1990830", VA = "0x181992230", Slot = "4")]
	[Obsolete]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x19922E0", Offset = "0x19908E0", VA = "0x1819922E0", Slot = "8")]
	[Obsolete]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
