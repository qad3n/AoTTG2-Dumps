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
		[Address(RVA = "0x3160FC0", Offset = "0x315FFC0", VA = "0x3160FC0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000015")]
	public event SettingsUpdateHandler OnSettingsUpdate
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x31610E0", Offset = "0x31600E0", VA = "0x31610E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x3161170", Offset = "0x3160170", VA = "0x3161170")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x3161200", Offset = "0x3160200", VA = "0x3161200")]
	internal VoiceManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x3161280", Offset = "0x3160280", VA = "0x3161280")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x3161450", Offset = "0x3160450", VA = "0x3161450")]
	public InputMode GetInputMode()
	{
		return default(InputMode);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x3160DF0", Offset = "0x315FDF0", VA = "0x3160DF0")]
	[MonoPInvokeCallback]
	private static void SetInputModeCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x31614E0", Offset = "0x31604E0", VA = "0x31614E0")]
	public void SetInputMode(InputMode inputMode, SetInputModeHandler callback)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x31616D0", Offset = "0x31606D0", VA = "0x31616D0")]
	public bool IsSelfMute()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x3161760", Offset = "0x3160760", VA = "0x3161760")]
	public void SetSelfMute(bool mute)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x31617F0", Offset = "0x31607F0", VA = "0x31617F0")]
	public bool IsSelfDeaf()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x3161880", Offset = "0x3160880", VA = "0x3161880")]
	public void SetSelfDeaf(bool deaf)
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x3161910", Offset = "0x3160910", VA = "0x3161910")]
	public bool IsLocalMute(long userId)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x31619B0", Offset = "0x31609B0", VA = "0x31619B0")]
	public void SetLocalMute(long userId, bool mute)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x3161A40", Offset = "0x3160A40", VA = "0x3161A40")]
	public byte GetLocalVolume(long userId)
	{
		return default(byte);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x3161AE0", Offset = "0x3160AE0", VA = "0x3161AE0")]
	public void SetLocalVolume(long userId, byte volume)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x3160ED0", Offset = "0x315FED0", VA = "0x3160ED0")]
	[MonoPInvokeCallback]
	private static void OnSettingsUpdateImpl(IntPtr ptr)
	{
	}
}
