using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000034")]
public interface IDeviceEnumerator : IDisposable, IEnumerable<DeviceInfo>, IEnumerable
{
	[Token(Token = "0x17000044")]
	bool IsSupported
	{
		[Token(Token = "0x6000114")]
		get;
	}

	[Token(Token = "0x17000045")]
	Action OnReady
	{
		[Token(Token = "0x6000116")]
		set;
	}

	[Token(Token = "0x17000046")]
	string Error
	{
		[Token(Token = "0x6000117")]
		get;
	}

	[Token(Token = "0x6000115")]
	void Refresh();
}
