// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ProcessorInstance
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000025")]
public readonly struct ProcessorInstance : IEquatable<ProcessorInstance>
{
	[Token(Token = "0x2000026")]
	public struct CreationParameters
	{
		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x0")]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		[CompilerGenerated]
		private UpdateSetting _003CcontrolUpdateSetting_003Ek__BackingField;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x4")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private UpdateSetting _003CrealtimeUpdateSetting_003Ek__BackingField;
	}

	[Token(Token = "0x2000027")]
	public enum UpdateSetting
	{
		[Token(Token = "0x4000038")]
		Default,
		[Token(Token = "0x4000039")]
		NeverUpdate,
		[Token(Token = "0x400003A")]
		UpdateIfDataIsAvailable,
		[Token(Token = "0x400003B")]
		UpdateAlways
	}

	[Token(Token = "0x2000028")]
	public ref struct Message
	{
		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x0")]
		internal long TypeHash;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x8")]
		internal unsafe void* Data;

		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x10")]
		internal IntPtr ManagedHandle;
	}

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Handle Handle;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe readonly ProcessorHeader* Header;

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x68B1CC0", Offset = "0x68B0CC0", VA = "0x68B1CC0", Slot = "4")]
	public bool Equals(ProcessorInstance other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x68B1E10", Offset = "0x68B0E10", VA = "0x68B1E10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x68B1D70", Offset = "0x68B0D70", VA = "0x68B1D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
