// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.DeviceEnumeratorBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000035")]
public abstract class DeviceEnumeratorBase : IDeviceEnumerator, IDisposable, IEnumerable<DeviceInfo>, IEnumerable
{
	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x10")]
	protected List<DeviceInfo> devices;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x18")]
	protected ILogger logger;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x28")]
	private Action onReady;

	[Token(Token = "0x17000047")]
	public virtual bool IsSupported
	{
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x3F19CC0", Offset = "0x3F19CC0", VA = "0x3F19CC0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public virtual string Error
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x3F19CD0", Offset = "0x3F19CD0", VA = "0x3F19CD0", Slot = "12")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x3F19CE0", Offset = "0x3F19CE0", VA = "0x3F19CE0", Slot = "13")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Action OnReady
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x3F19E50", Offset = "0x3F19E50", VA = "0x3F19E50")]
		protected get
		{
			return null;
		}
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x3F19E60", Offset = "0x3F19E60", VA = "0x3F19E60", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3F19C30", Offset = "0x3F19C30", VA = "0x3F19C30")]
	public DeviceEnumeratorBase(ILogger logger)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3F19CF0", Offset = "0x3F19CF0", VA = "0x3F19CF0", Slot = "9")]
	public IEnumerator<DeviceInfo> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	public abstract void Refresh();

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3F19EB0", Offset = "0x3F19EB0", VA = "0x3F19EB0", Slot = "10")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	public abstract void Dispose();
}
