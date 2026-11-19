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
[Token(Token = "0x20002BB")]
[ComVisible(true)]
[System.MonoTODO("Serialization format not compatible with .NET")]
public sealed class Evidence : ICollection, IEnumerable
{
	[Token(Token = "0x20002BC")]
	private class EvidenceEnumerator : IEnumerator
	{
		[Token(Token = "0x4000BC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IEnumerator currentEnum;

		[Token(Token = "0x4000BC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IEnumerator hostEnum;

		[Token(Token = "0x4000BC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IEnumerator assemblyEnum;

		[Token(Token = "0x1700026D")]
		public object Current
		{
			[Token(Token = "0x600182B")]
			[Address(RVA = "0x532D850", Offset = "0x532C850", VA = "0x532D850", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001828")]
		[Address(RVA = "0x532D570", Offset = "0x532C570", VA = "0x532D570")]
		public EvidenceEnumerator(IEnumerator hostenum, IEnumerator assemblyenum)
		{
		}

		[Token(Token = "0x6001829")]
		[Address(RVA = "0x532D5C0", Offset = "0x532C5C0", VA = "0x532D5C0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600182A")]
		[Address(RVA = "0x532D710", Offset = "0x532C710", VA = "0x532D710", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000BC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _locked;

	[Token(Token = "0x4000BC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList hostEvidenceList;

	[Token(Token = "0x4000BC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayList assemblyEvidenceList;

	[Token(Token = "0x1700026A")]
	[Obsolete]
	public int Count
	{
		[Token(Token = "0x6001823")]
		[Address(RVA = "0x532D360", Offset = "0x532C360", VA = "0x532D360", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026B")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001824")]
		[Address(RVA = "0x532D3C0", Offset = "0x532C3C0", VA = "0x532D3C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026C")]
	public object SyncRoot
	{
		[Token(Token = "0x6001825")]
		[Address(RVA = "0x532D3D0", Offset = "0x532C3D0", VA = "0x532D3D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x532D350", Offset = "0x532C350", VA = "0x532D350")]
	public Evidence()
	{
	}

	[Token(Token = "0x6001826")]
	[Address(RVA = "0x532D3E0", Offset = "0x532C3E0", VA = "0x532D3E0", Slot = "4")]
	[Obsolete]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001827")]
	[Address(RVA = "0x532D4A0", Offset = "0x532C4A0", VA = "0x532D4A0", Slot = "8")]
	[Obsolete]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
