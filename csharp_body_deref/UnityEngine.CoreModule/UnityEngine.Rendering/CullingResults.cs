// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingResults
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E3")]
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

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x4E2D6F0", Offset = "0x4E2D6F0", VA = "0x4E2D6F0", Slot = "4")]
	public bool Equals(CullingResults other)
	{
		return default(bool);
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x4E2D740", Offset = "0x4E2D740", VA = "0x4E2D740", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x4E2D7E0", Offset = "0x4E2D7E0", VA = "0x4E2D7E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x4E2D800", Offset = "0x4E2D800", VA = "0x4E2D800")]
	public static bool operator ==(CullingResults left, CullingResults right)
	{
		return default(bool);
	}
}
