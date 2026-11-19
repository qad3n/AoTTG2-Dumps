// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Audio.Handle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Bindings;

namespace Unity.Audio;

[Token(Token = "0x200002F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.DSPGraphModule" })]
[UnityEngine.Bindings.NativeType(Header = "Modules/Audio/Public/AudioHandle.h")]
internal struct Handle : IEquatable<Handle>
{
	[Token(Token = "0x2000030")]
	internal struct Node
	{
		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x0")]
		private unsafe void* Next;

		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x8")]
		public int Id;

		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0xC")]
		public int Version;

		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x10")]
		public int AllocationFlags;
	}

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	private IntPtr m_Node;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x8")]
	public int Version;

	[Token(Token = "0x17000022")]
	internal unsafe readonly Node* AtomicNode
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x68B26F0", Offset = "0x68B16F0", VA = "0x68B26F0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (Node*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000023")]
	public readonly bool ValidAndNotDisposed
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x68B2770", Offset = "0x68B1770", VA = "0x68B2770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x68B1E00", Offset = "0x68B0E00", VA = "0x68B1E00", Slot = "4")]
	public readonly bool Equals(Handle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x68B2700", Offset = "0x68B1700", VA = "0x68B2700", Slot = "0")]
	public override readonly bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x68B1E80", Offset = "0x68B0E80", VA = "0x68B1E80", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x68B1AE0", Offset = "0x68B0AE0", VA = "0x68B1AE0")]
	public readonly void CheckValidOrThrow()
	{
	}
}
