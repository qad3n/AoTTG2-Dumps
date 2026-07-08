using System;
using Il2CppDummyDll;

namespace UnityEngine.XR;

[Token(Token = "0x2000005")]
[Flags]
internal enum AvailableTrackingData
{
	[Token(Token = "0x4000015")]
	None = 0,
	[Token(Token = "0x4000016")]
	PositionAvailable = 1,
	[Token(Token = "0x4000017")]
	RotationAvailable = 2,
	[Token(Token = "0x4000018")]
	VelocityAvailable = 4,
	[Token(Token = "0x4000019")]
	AngularVelocityAvailable = 8,
	[Token(Token = "0x400001A")]
	AccelerationAvailable = 0x10,
	[Token(Token = "0x400001B")]
	AngularAccelerationAvailable = 0x20
}
