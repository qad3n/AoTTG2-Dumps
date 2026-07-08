using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200014B")]
public class VoiceManager
{
	[Token(Token = "0x200014C")]
	internal struct FFIEvents
	{
		[Token(Token = "0x200014D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SettingsUpdateHandler(IntPtr ptr);

		[Token(Token = "0x40001ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SettingsUpdateHandler OnSettingsUpdate;
	}

	[Token(Token = "0x200014E")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200014F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetInputModeMethod(IntPtr methodsPtr, ref InputMode inputMode);

		[Token(Token = "0x2000150")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetInputModeCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000151")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetInputModeMethod(IntPtr methodsPtr, InputMode inputMode, IntPtr callbackData, SetInputModeCallback callback);

		[Token(Token = "0x2000152")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result IsSelfMuteMethod(IntPtr methodsPtr, ref bool mute);

		[Token(Token = "0x2000153")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetSelfMuteMethod(IntPtr methodsPtr, bool mute);

		[Token(Token = "0x2000154")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result IsSelfDeafMethod(IntPtr methodsPtr, ref bool deaf);

		[Token(Token = "0x2000155")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetSelfDeafMethod(IntPtr methodsPtr, bool deaf);

		[Token(Token = "0x2000156")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result IsLocalMuteMethod(IntPtr methodsPtr, long userId, ref bool mute);

		[Token(Token = "0x2000157")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetLocalMuteMethod(IntPtr methodsPtr, long userId, bool mute);

		[Token(Token = "0x2000158")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLocalVolumeMethod(IntPtr methodsPtr, long userId, ref byte volume);

		[Token(Token = "0x2000159")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetLocalVolumeMethod(IntPtr methodsPtr, long userId, byte volume);

		[Token(Token = "0x40001EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal GetInputModeMethod GetInputMode;

		[Token(Token = "0x40001EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal SetInputModeMethod SetInputMode;

		[Token(Token = "0x40001F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal IsSelfMuteMethod IsSelfMute;

		[Token(Token = "0x40001F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal SetSelfMuteMethod SetSelfMute;

		[Token(Token = "0x40001F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal IsSelfDeafMethod IsSelfDeaf;

		[Token(Token = "0x40001F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal SetSelfDeafMethod SetSelfDeaf;

		[Token(Token = "0x40001F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal IsLocalMuteMethod IsLocalMute;

		[Token(Token = "0x40001F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal SetLocalMuteMethod SetLocalMute;

		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal GetLocalVolumeMethod GetLocalVolume;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal SetLocalVolumeMethod SetLocalVolume;
	}

	[Token(Token = "0x200015A")]
	public delegate void SetInputModeHandler(Result result);

	[Token(Token = "0x200015B")]
	public delegate void SettingsUpdateHandler();

	[Token(Token = "0x40001EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x1700000F")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x2350550", Offset = "0x2350550", VA = "0x2350550")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000015")]
	public event SettingsUpdateHandler OnSettingsUpdate
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x2350670", Offset = "0x2350670", VA = "0x2350670")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x2350700", Offset = "0x2350700", VA = "0x2350700")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x2350790", Offset = "0x2350790", VA = "0x2350790")]
	internal VoiceManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x2350810", Offset = "0x2350810", VA = "0x2350810")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x23509E0", Offset = "0x23509E0", VA = "0x23509E0")]
	public InputMode GetInputMode()
	{
		return default(InputMode);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x2350370", Offset = "0x2350370", VA = "0x2350370")]
	[MonoPInvokeCallback]
	private static void SetInputModeCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x2350A70", Offset = "0x2350A70", VA = "0x2350A70")]
	public void SetInputMode(InputMode inputMode, SetInputModeHandler callback)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x2350C70", Offset = "0x2350C70", VA = "0x2350C70")]
	public bool IsSelfMute()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x2350D00", Offset = "0x2350D00", VA = "0x2350D00")]
	public void SetSelfMute(bool mute)
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x2350D90", Offset = "0x2350D90", VA = "0x2350D90")]
	public bool IsSelfDeaf()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x2350E20", Offset = "0x2350E20", VA = "0x2350E20")]
	public void SetSelfDeaf(bool deaf)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x2350EB0", Offset = "0x2350EB0", VA = "0x2350EB0")]
	public bool IsLocalMute(long userId)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x2350F50", Offset = "0x2350F50", VA = "0x2350F50")]
	public void SetLocalMute(long userId, bool mute)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x2350FE0", Offset = "0x2350FE0", VA = "0x2350FE0")]
	public byte GetLocalVolume(long userId)
	{
		return default(byte);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x2351080", Offset = "0x2351080", VA = "0x2351080")]
	public void SetLocalVolume(long userId, byte volume)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x2350450", Offset = "0x2350450", VA = "0x2350450")]
	[MonoPInvokeCallback]
	private static void OnSettingsUpdateImpl(IntPtr ptr)
	{
	}
}
