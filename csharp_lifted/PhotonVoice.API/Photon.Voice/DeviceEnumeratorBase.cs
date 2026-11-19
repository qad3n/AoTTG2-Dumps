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

[Token(Token = "0x2000033")]
public abstract class DeviceEnumeratorBase : IDeviceEnumerator, IDisposable, IEnumerable<DeviceInfo>, IEnumerable
{
	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x10")]
	protected List<DeviceInfo> devices;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x18")]
	protected ILogger logger;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x28")]
	private Action onReady;

	[Token(Token = "0x17000047")]
	public virtual bool IsSupported
	{
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x5704960", Offset = "0x5703960", VA = "0x5704960", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public virtual string Error
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x5704970", Offset = "0x5703970", VA = "0x5704970", Slot = "12")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x5704980", Offset = "0x5703980", VA = "0x5704980", Slot = "13")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Action OnReady
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x5704B00", Offset = "0x5703B00", VA = "0x5704B00")]
		protected get
		{
			return null;
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x5704B10", Offset = "0x5703B10", VA = "0x5704B10", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x57048D0", Offset = "0x57038D0", VA = "0x57048D0")]
	public DeviceEnumeratorBase(ILogger logger)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5704990", Offset = "0x5703990", VA = "0x5704990", Slot = "9")]
	public IEnumerator<DeviceInfo> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	public abstract void Refresh();

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x5704B60", Offset = "0x5703B60", VA = "0x5704B60", Slot = "10")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	public abstract void Dispose();
}
