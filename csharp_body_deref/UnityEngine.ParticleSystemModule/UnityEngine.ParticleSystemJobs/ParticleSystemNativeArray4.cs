using System.Reflection;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.ParticleSystemJobs;

[Token(Token = "0x200000E")]
[DefaultMember("Item")]
public struct ParticleSystemNativeArray4
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<float> x;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<float> y;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<float> z;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x30")]
	public NativeArray<float> w;
}
