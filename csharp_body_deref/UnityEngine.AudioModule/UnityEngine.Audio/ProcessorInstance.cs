// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ProcessorInstance
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Audio;

namespace UnityEngine.Audio;

[Token(Token = "0x2000020")]
public readonly struct ProcessorInstance : IEquatable<ProcessorInstance>
{
	[Token(Token = "0x2000021")]
	public struct CreationParameters
	{
		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x0")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private UpdateSetting _003CcontrolUpdateSetting_003Ek__BackingField;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x4")]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		[CompilerGenerated]
		private UpdateSetting _003CrealtimeUpdateSetting_003Ek__BackingField;
	}

	[Token(Token = "0x2000022")]
	public enum UpdateSetting
	{
		[Token(Token = "0x4000030")]
		Default,
		[Token(Token = "0x4000031")]
		NeverUpdate,
		[Token(Token = "0x4000032")]
		UpdateIfDataIsAvailable,
		[Token(Token = "0x4000033")]
		UpdateAlways
	}

	[Token(Token = "0x2000023")]
	public ref struct Message
	{
		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0x0")]
		internal long TypeHash;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x8")]
		internal unsafe void* Data;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x10")]
		internal IntPtr ManagedHandle;
	}

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Handle Handle;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe readonly ProcessorHeader* Header;

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2EB5940", Offset = "0x2EB3F40", VA = "0x182EB5940", Slot = "4")]
	public bool Equals(ProcessorInstance other)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2EB6420", Offset = "0x2EB4A20", VA = "0x182EB6420", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2EB5A30", Offset = "0x2EB4030", VA = "0x182EB5A30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
