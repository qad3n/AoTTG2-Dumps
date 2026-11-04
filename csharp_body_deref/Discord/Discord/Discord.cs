// ==================== AoTTG2 cross-reference ====================
// Type: Discord.Discord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200005D")]
public class Discord : IDisposable
{
	[Token(Token = "0x200005E")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x200005F")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000060")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DestroyHandler(IntPtr MethodsPtr);

		[Token(Token = "0x2000061")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result RunCallbacksMethod(IntPtr methodsPtr);

		[Token(Token = "0x2000062")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetLogHookCallback(IntPtr ptr, LogLevel level, string message);

		[Token(Token = "0x2000063")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetLogHookMethod(IntPtr methodsPtr, LogLevel minLevel, IntPtr callbackData, SetLogHookCallback callback);

		[Token(Token = "0x2000064")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetApplicationManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x2000065")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetUserManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x2000066")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetImageManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x2000067")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetActivityManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x2000068")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetRelationshipManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x2000069")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetLobbyManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x200006A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetNetworkManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x200006B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetOverlayManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x200006C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetStorageManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x200006D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetStoreManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x200006E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetVoiceManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x200006F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate IntPtr GetAchievementManagerMethod(IntPtr discordPtr);

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal DestroyHandler Destroy;

		[Token(Token = "0x4000128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal RunCallbacksMethod RunCallbacks;

		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal SetLogHookMethod SetLogHook;

		[Token(Token = "0x400012A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetApplicationManagerMethod GetApplicationManager;

		[Token(Token = "0x400012B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GetUserManagerMethod GetUserManager;

		[Token(Token = "0x400012C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal GetImageManagerMethod GetImageManager;

		[Token(Token = "0x400012D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal GetActivityManagerMethod GetActivityManager;

		[Token(Token = "0x400012E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal GetRelationshipManagerMethod GetRelationshipManager;

		[Token(Token = "0x400012F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal GetLobbyManagerMethod GetLobbyManager;

		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal GetNetworkManagerMethod GetNetworkManager;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal GetOverlayManagerMethod GetOverlayManager;

		[Token(Token = "0x4000132")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal GetStorageManagerMethod GetStorageManager;

		[Token(Token = "0x4000133")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal GetStoreManagerMethod GetStoreManager;

		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal GetVoiceManagerMethod GetVoiceManager;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal GetAchievementManagerMethod GetAchievementManager;
	}

	[Token(Token = "0x2000070")]
	internal struct FFICreateParams
	{
		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal long ClientId;

		[Token(Token = "0x4000137")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal ulong Flags;

		[Token(Token = "0x4000138")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal IntPtr Events;

		[Token(Token = "0x4000139")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IntPtr EventData;

		[Token(Token = "0x400013A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal IntPtr ApplicationEvents;

		[Token(Token = "0x400013B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal uint ApplicationVersion;

		[Token(Token = "0x400013C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal IntPtr UserEvents;

		[Token(Token = "0x400013D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal uint UserVersion;

		[Token(Token = "0x400013E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal IntPtr ImageEvents;

		[Token(Token = "0x400013F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal uint ImageVersion;

		[Token(Token = "0x4000140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal IntPtr ActivityEvents;

		[Token(Token = "0x4000141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal uint ActivityVersion;

		[Token(Token = "0x4000142")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal IntPtr RelationshipEvents;

		[Token(Token = "0x4000143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal uint RelationshipVersion;

		[Token(Token = "0x4000144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal IntPtr LobbyEvents;

		[Token(Token = "0x4000145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal uint LobbyVersion;

		[Token(Token = "0x4000146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		internal IntPtr NetworkEvents;

		[Token(Token = "0x4000147")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		internal uint NetworkVersion;

		[Token(Token = "0x4000148")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal IntPtr OverlayEvents;

		[Token(Token = "0x4000149")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal uint OverlayVersion;

		[Token(Token = "0x400014A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		internal IntPtr StorageEvents;

		[Token(Token = "0x400014B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		internal uint StorageVersion;

		[Token(Token = "0x400014C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		internal IntPtr StoreEvents;

		[Token(Token = "0x400014D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		internal uint StoreVersion;

		[Token(Token = "0x400014E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
		internal IntPtr VoiceEvents;

		[Token(Token = "0x400014F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
		internal uint VoiceVersion;

		[Token(Token = "0x4000150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		internal IntPtr AchievementEvents;

		[Token(Token = "0x4000151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		internal uint AchievementVersion;
	}

	[Token(Token = "0x2000071")]
	public delegate void SetLogHookHandler(LogLevel level, string message);

	[Token(Token = "0x40000FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle SelfHandle;

	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr EventsPtr;

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private FFIEvents Events;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr ApplicationEventsPtr;

	[Token(Token = "0x4000101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ApplicationManager.FFIEvents ApplicationEvents;

	[Token(Token = "0x4000102")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal ApplicationManager ApplicationManagerInstance;

	[Token(Token = "0x4000103")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr UserEventsPtr;

	[Token(Token = "0x4000104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private UserManager.FFIEvents UserEvents;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal UserManager UserManagerInstance;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private IntPtr ImageEventsPtr;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private ImageManager.FFIEvents ImageEvents;

	[Token(Token = "0x4000108")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal ImageManager ImageManagerInstance;

	[Token(Token = "0x4000109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private IntPtr ActivityEventsPtr;

	[Token(Token = "0x400010A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ActivityManager.FFIEvents ActivityEvents;

	[Token(Token = "0x400010B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal ActivityManager ActivityManagerInstance;

	[Token(Token = "0x400010C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntPtr RelationshipEventsPtr;

	[Token(Token = "0x400010D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private RelationshipManager.FFIEvents RelationshipEvents;

	[Token(Token = "0x400010E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal RelationshipManager RelationshipManagerInstance;

	[Token(Token = "0x400010F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntPtr LobbyEventsPtr;

	[Token(Token = "0x4000110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private LobbyManager.FFIEvents LobbyEvents;

	[Token(Token = "0x4000111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	internal LobbyManager LobbyManagerInstance;

	[Token(Token = "0x4000112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private IntPtr NetworkEventsPtr;

	[Token(Token = "0x4000113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private NetworkManager.FFIEvents NetworkEvents;

	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	internal NetworkManager NetworkManagerInstance;

	[Token(Token = "0x4000115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private IntPtr OverlayEventsPtr;

	[Token(Token = "0x4000116")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private OverlayManager.FFIEvents OverlayEvents;

	[Token(Token = "0x4000117")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	internal OverlayManager OverlayManagerInstance;

	[Token(Token = "0x4000118")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private IntPtr StorageEventsPtr;

	[Token(Token = "0x4000119")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private StorageManager.FFIEvents StorageEvents;

	[Token(Token = "0x400011A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	internal StorageManager StorageManagerInstance;

	[Token(Token = "0x400011B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private IntPtr StoreEventsPtr;

	[Token(Token = "0x400011C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private StoreManager.FFIEvents StoreEvents;

	[Token(Token = "0x400011D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	internal StoreManager StoreManagerInstance;

	[Token(Token = "0x400011E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private IntPtr VoiceEventsPtr;

	[Token(Token = "0x400011F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private VoiceManager.FFIEvents VoiceEvents;

	[Token(Token = "0x4000120")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	internal VoiceManager VoiceManagerInstance;

	[Token(Token = "0x4000121")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private IntPtr AchievementEventsPtr;

	[Token(Token = "0x4000122")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private AchievementManager.FFIEvents AchievementEvents;

	[Token(Token = "0x4000123")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	internal AchievementManager AchievementManagerInstance;

	[Token(Token = "0x4000124")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000125")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private object MethodsStructure;

	[Token(Token = "0x4000126")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private GCHandle? setLogHook;

	[Token(Token = "0x17000005")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x52E9C0", Offset = "0x52CFC0", VA = "0x18052E9C0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[PreserveSig]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x52CCB0", Offset = "0x52B2B0", VA = "0x18052CCB0")]
	private static extern Result DiscordCreate(uint version, ref FFICreateParams createParams, out IntPtr manager);

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x52E470", Offset = "0x52CA70", VA = "0x18052E470")]
	public Discord(long clientId, ulong flags)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x52E070", Offset = "0x52C670", VA = "0x18052E070")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x52CD50", Offset = "0x52B350", VA = "0x18052CD50", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x52E0E0", Offset = "0x52C6E0", VA = "0x18052E0E0")]
	public void RunCallbacks()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x52E180", Offset = "0x52C780", VA = "0x18052E180")]
	[MonoPInvokeCallback]
	private static void SetLogHookCallbackImpl(IntPtr ptr, LogLevel level, string message)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x52E280", Offset = "0x52C880", VA = "0x18052E280")]
	public void SetLogHook(LogLevel minLevel, SetLogHookHandler callback)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x52D190", Offset = "0x52B790", VA = "0x18052D190")]
	public ApplicationManager GetApplicationManager()
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x52DCC0", Offset = "0x52C2C0", VA = "0x18052DCC0")]
	public UserManager GetUserManager()
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x52D350", Offset = "0x52B950", VA = "0x18052D350")]
	public ImageManager GetImageManager()
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x52D000", Offset = "0x52B600", VA = "0x18052D000")]
	public ActivityManager GetActivityManager()
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x52D930", Offset = "0x52BF30", VA = "0x18052D930")]
	public RelationshipManager GetRelationshipManager()
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x52D510", Offset = "0x52BB10", VA = "0x18052D510")]
	public LobbyManager GetLobbyManager()
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x52D6A0", Offset = "0x52BCA0", VA = "0x18052D6A0")]
	public NetworkManager GetNetworkManager()
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x52D830", Offset = "0x52BE30", VA = "0x18052D830")]
	public OverlayManager GetOverlayManager()
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x52DAC0", Offset = "0x52C0C0", VA = "0x18052DAC0")]
	public StorageManager GetStorageManager()
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x52DBC0", Offset = "0x52C1C0", VA = "0x18052DBC0")]
	public StoreManager GetStoreManager()
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x52DF70", Offset = "0x52C570", VA = "0x18052DF70")]
	public VoiceManager GetVoiceManager()
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x52CF00", Offset = "0x52B500", VA = "0x18052CF00")]
	public AchievementManager GetAchievementManager()
	{
		return null;
	}
}
