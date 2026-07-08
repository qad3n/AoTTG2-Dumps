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
		[Address(RVA = "0x3C24370", Offset = "0x3C24370", VA = "0x3C24370", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public virtual string Error
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x3C24380", Offset = "0x3C24380", VA = "0x3C24380", Slot = "12")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x3C24390", Offset = "0x3C24390", VA = "0x3C24390", Slot = "13")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Action OnReady
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x3C24500", Offset = "0x3C24500", VA = "0x3C24500")]
		protected get
		{
			return null;
		}
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x3C24510", Offset = "0x3C24510", VA = "0x3C24510", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3C242E0", Offset = "0x3C242E0", VA = "0x3C242E0")]
	public DeviceEnumeratorBase(ILogger logger)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3C243A0", Offset = "0x3C243A0", VA = "0x3C243A0", Slot = "9")]
	public IEnumerator<DeviceInfo> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	public abstract void Refresh();

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3C24560", Offset = "0x3C24560", VA = "0x3C24560", Slot = "10")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	public abstract void Dispose();
}
