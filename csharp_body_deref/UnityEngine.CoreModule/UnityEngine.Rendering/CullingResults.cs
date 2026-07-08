using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableCulling.h")]
public struct CullingResults : IEquatable<CullingResults>
{
	[Token(Token = "0x4000894")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr ptr;

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x8")]
	private unsafe CullingAllocationInfo* m_AllocationInfo;

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x4B05DC0", Offset = "0x4B05DC0", VA = "0x4B05DC0", Slot = "4")]
	public bool Equals(CullingResults other)
	{
		return default(bool);
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x4B05E10", Offset = "0x4B05E10", VA = "0x4B05E10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x4B05EB0", Offset = "0x4B05EB0", VA = "0x4B05EB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x4B05ED0", Offset = "0x4B05ED0", VA = "0x4B05ED0")]
	public static bool operator ==(CullingResults left, CullingResults right)
	{
		return default(bool);
	}
}
