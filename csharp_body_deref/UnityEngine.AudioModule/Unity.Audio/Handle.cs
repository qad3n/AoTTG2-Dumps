// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Audio.Handle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Bindings;

namespace Unity.Audio;

[Token(Token = "0x200002E")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Audio/Public/AudioHandle.h")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.DSPGraphModule" })]
internal struct Handle : IEquatable<Handle>
{
	[Token(Token = "0x200002F")]
	internal struct Node
	{
		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0x0")]
		private unsafe void* Next;

		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0x8")]
		public int Id;

		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0xC")]
		public int Version;

		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x10")]
		public int AllocationFlags;
	}

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	private IntPtr m_Node;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x8")]
	public int Version;

	[Token(Token = "0x17000021")]
	internal unsafe readonly Node* AtomicNode
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x2EB5BA0", Offset = "0x2EB41A0", VA = "0x182EB5BA0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (Node*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000022")]
	public readonly bool ValidAndNotDisposed
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x2EB5BB0", Offset = "0x2EB41B0", VA = "0x182EB5BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0xA4F710", Offset = "0xA4DD10", VA = "0x180A4F710", Slot = "4")]
	public readonly bool Equals(Handle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2EB5AF0", Offset = "0x2EB40F0", VA = "0x182EB5AF0", Slot = "0")]
	public override readonly bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2EB5A30", Offset = "0x2EB4030", VA = "0x182EB5A30", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2EB5A60", Offset = "0x2EB4060", VA = "0x182EB5A60")]
	public readonly void CheckValidOrThrow()
	{
	}
}
