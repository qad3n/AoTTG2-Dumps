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
			[Address(RVA = "0x4E3DD30", Offset = "0x4E3DD30", VA = "0x4E3DD30", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x4E3DA50", Offset = "0x4E3DA50", VA = "0x4E3DA50")]
		public EvidenceEnumerator(IEnumerator hostenum, IEnumerator assemblyenum)
		{
		}

		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x4E3DAA0", Offset = "0x4E3DAA0", VA = "0x4E3DAA0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017E5")]
		[Address(RVA = "0x4E3DBF0", Offset = "0x4E3DBF0", VA = "0x4E3DBF0", Slot = "6")]
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
		[Address(RVA = "0x4E3D840", Offset = "0x4E3D840", VA = "0x4E3D840", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026A")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x4E3D8A0", Offset = "0x4E3D8A0", VA = "0x4E3D8A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public object SyncRoot
	{
		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x4E3D8B0", Offset = "0x4E3D8B0", VA = "0x4E3D8B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x4E3D830", Offset = "0x4E3D830", VA = "0x4E3D830")]
	public Evidence()
	{
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x4E3D8C0", Offset = "0x4E3D8C0", VA = "0x4E3D8C0", Slot = "4")]
	[Obsolete]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x4E3D980", Offset = "0x4E3D980", VA = "0x4E3D980", Slot = "8")]
	[Obsolete]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
