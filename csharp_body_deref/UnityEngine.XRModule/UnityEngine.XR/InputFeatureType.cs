using Il2CppDummyDll;

namespace UnityEngine.XR;

[Token(Token = "0x2000007")]
internal enum InputFeatureType : uint
{
	[Token(Token = "0x4000027")]
	Custom = 0u,
	[Token(Token = "0x4000028")]
	Binary = 1u,
	[Token(Token = "0x4000029")]
	DiscreteStates = 2u,
	[Token(Token = "0x400002A")]
	Axis1D = 3u,
	[Token(Token = "0x400002B")]
	Axis2D = 4u,
	[Token(Token = "0x400002C")]
	Axis3D = 5u,
	[Token(Token = "0x400002D")]
	Rotation = 6u,
	[Token(Token = "0x400002E")]
	Hand = 7u,
	[Token(Token = "0x400002F")]
	Bone = 8u,
	[Token(Token = "0x4000030")]
	Eyes = 9u,
	[Token(Token = "0x4000031")]
	kUnityXRInputFeatureTypeInvalid = uint.MaxValue
}
