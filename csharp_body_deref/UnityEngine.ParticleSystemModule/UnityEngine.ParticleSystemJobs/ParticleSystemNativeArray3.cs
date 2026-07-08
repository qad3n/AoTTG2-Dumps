using System.Reflection;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.ParticleSystemJobs;

[Token(Token = "0x200000D")]
[DefaultMember("Item")]
public struct ParticleSystemNativeArray3
{
	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<float> x;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<float> y;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<float> z;
}
