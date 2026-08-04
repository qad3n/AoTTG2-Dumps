// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.TrackballAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000009")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
public sealed class TrackballAttribute : Attribute
{
	[Token(Token = "0x200000A")]
	public enum Mode
	{
		[Token(Token = "0x4000012")]
		None,
		[Token(Token = "0x4000013")]
		Lift,
		[Token(Token = "0x4000014")]
		Gamma,
		[Token(Token = "0x4000015")]
		Gain
	}

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x10")]
	public readonly Mode mode;

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4B32710", Offset = "0x4B32710", VA = "0x4B32710")]
	public TrackballAttribute(Mode mode)
	{
	}
}
