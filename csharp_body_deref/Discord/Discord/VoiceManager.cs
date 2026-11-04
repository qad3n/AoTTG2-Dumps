// ==================== AoTTG2 cross-reference ====================
// Type: Discord.VoiceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000149")]
public class VoiceManager
{
	[Token(Token = "0x200014A")]
	internal struct FFIEvents
	{
		[Token(Token = "0x200014B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SettingsUpdateHandler(IntPtr ptr);

		[Token(Token = "0x40001E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SettingsUpdateHandler OnSettingsUpdate;
	}

	[Token(Token = "0x200014C")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200014D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetInputModeMethod(IntPtr methodsPtr, ref InputMode inputMode);

		[Token(Token = "0x200014E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetInputModeCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200014F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetInputModeMethod(IntPtr methodsPtr, InputMode inputMode, IntPtr callbackData, SetInputModeCallback callback);

		[Token(Token = "0x2000150")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result IsSelfMuteMethod(IntPtr methodsPtr, ref bool mute);

		[Token(Token = "0x2000151")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetSelfMuteMethod(IntPtr methodsPtr, bool mute);

		[Token(Token = "0x2000152")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result IsSelfDeafMethod(IntPtr methodsPtr, ref bool deaf);

		[Token(Token = "0x2000153")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetSelfDeafMethod(IntPtr methodsPtr, bool deaf);

		[Token(Token = "0x2000154")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result IsLocalMuteMethod(IntPtr methodsPtr, long userId, ref bool mute);

		[Token(Token = "0x2000155")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetLocalMuteMethod(IntPtr methodsPtr, long userId, bool mute);

		[Token(Token = "0x2000156")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLocalVolumeMethod(IntPtr methodsPtr, long userId, ref byte volume);

		[Token(Token = "0x2000157")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetLocalVolumeMethod(IntPtr methodsPtr, long userId, byte volume);

		[Token(Token = "0x40001E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal GetInputModeMethod GetInputMode;

		[Token(Token = "0x40001EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal SetInputModeMethod SetInputMode;

		[Token(Token = "0x40001EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal IsSelfMuteMethod IsSelfMute;

		[Token(Token = "0x40001EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal SetSelfMuteMethod SetSelfMute;

		[Token(Token = "0x40001ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal IsSelfDeafMethod IsSelfDeaf;

		[Token(Token = "0x40001EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal SetSelfDeafMethod SetSelfDeaf;

		[Token(Token = "0x40001EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal IsLocalMuteMethod IsLocalMute;

		[Token(Token = "0x40001F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal SetLocalMuteMethod SetLocalMute;

		[Token(Token = "0x40001F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal GetLocalVolumeMethod GetLocalVolume;

		[Token(Token = "0x40001F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal SetLocalVolumeMethod SetLocalVolume;
	}

	[Token(Token = "0x2000158")]
	public delegate void SetInputModeHandler(Result result);

	[Token(Token = "0x2000159")]
	public delegate void SettingsUpdateHandler();

	[Token(Token = "0x40001E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x40001E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private SettingsUpdateHandler m_OnSettingsUpdate;

	[Token(Token = "0x1700000F")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x546270", Offset = "0x544870", VA = "0x180546270")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000015")]
	public event SettingsUpdateHandler OnSettingsUpdate
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x5461D0", Offset = "0x5447D0", VA = "0x1805461D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x5463A0", Offset = "0x5449A0", VA = "0x1805463A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x545FE0", Offset = "0x5445E0", VA = "0x180545FE0")]
	internal VoiceManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x545640", Offset = "0x543C40", VA = "0x180545640")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5454E0", Offset = "0x543AE0", VA = "0x1805454E0")]
	public InputMode GetInputMode()
	{
		return default(InputMode);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x545AB0", Offset = "0x5440B0", VA = "0x180545AB0")]
	[MonoPInvokeCallback]
	private static void SetInputModeCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x545BC0", Offset = "0x5441C0", VA = "0x180545BC0")]
	public void SetInputMode(InputMode inputMode, SetInputModeHandler callback)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x5458E0", Offset = "0x543EE0", VA = "0x1805458E0")]
	public bool IsSelfMute()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x545F40", Offset = "0x544540", VA = "0x180545F40")]
	public void SetSelfMute(bool mute)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x545830", Offset = "0x543E30", VA = "0x180545830")]
	public bool IsSelfDeaf()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x545EA0", Offset = "0x5444A0", VA = "0x180545EA0")]
	public void SetSelfDeaf(bool deaf)
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x545770", Offset = "0x543D70", VA = "0x180545770")]
	public bool IsLocalMute(long userId)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x545D20", Offset = "0x544320", VA = "0x180545D20")]
	public void SetLocalMute(long userId, bool mute)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x545580", Offset = "0x543B80", VA = "0x180545580")]
	public byte GetLocalVolume(long userId)
	{
		return default(byte);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x545DE0", Offset = "0x5443E0", VA = "0x180545DE0")]
	public void SetLocalVolume(long userId, byte volume)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x545990", Offset = "0x543F90", VA = "0x180545990")]
	[MonoPInvokeCallback]
	private static void OnSettingsUpdateImpl(IntPtr ptr)
	{
	}
}
