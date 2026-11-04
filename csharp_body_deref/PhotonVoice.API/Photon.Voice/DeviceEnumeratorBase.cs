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
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public virtual string Error
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "12")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "13")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Action OnReady
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		protected get
		{
			return null;
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x1D68E20", Offset = "0x1D67420", VA = "0x181D68E20", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1D68D80", Offset = "0x1D67380", VA = "0x181D68D80")]
	public DeviceEnumeratorBase(ILogger logger)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x1D68CC0", Offset = "0x1D672C0", VA = "0x181D68CC0", Slot = "9")]
	public IEnumerator<DeviceInfo> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	public abstract void Refresh();

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x1D68CC0", Offset = "0x1D672C0", VA = "0x181D68CC0", Slot = "10")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	public abstract void Dispose();
}
