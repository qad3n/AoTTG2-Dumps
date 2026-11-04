// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.EditorInstanceDataArrays
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200007E")]
internal struct EditorInstanceDataArrays : IDataArrays
{
	[Token(Token = "0x200007F")]
	internal readonly struct ReadOnly
	{
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public ReadOnly(in CPUInstanceData instanceData)
		{
		}
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public void Remove(int index, int lastIndex)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public void SetDefault(int index)
	{
	}
}
