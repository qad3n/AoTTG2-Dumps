// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingAccelStruct
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200004B")]
internal sealed class HardwareRayTracingAccelStruct : IRayTracingAccelStruct, IDisposable
{
	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x18")]
	private readonly RayTracingAccelerationStructureBuildFlags m_BuildFlags;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<int, Mesh> m_Meshes;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x28")]
	private readonly ReferenceCounter m_Counter;

	[Token(Token = "0x17000022")]
	public RayTracingAccelerationStructure accelStruct
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2D96BA0", Offset = "0x2D951A0", VA = "0x182D96BA0")]
	internal HardwareRayTracingAccelStruct(AccelerationStructureOptions options, ReferenceCounter counter)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2D96A70", Offset = "0x2D95070", VA = "0x182D96A70", Slot = "12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x2D96680", Offset = "0x2D94C80", VA = "0x182D96680", Slot = "4")]
	public int AddInstance(MeshInstanceDesc meshInstance)
	{
		return default(int);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x2D96AA0", Offset = "0x2D950A0", VA = "0x182D96AA0", Slot = "5")]
	public void RemoveInstance(int instanceHandle)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x2D96A10", Offset = "0x2D95010", VA = "0x182D96A10", Slot = "6")]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x2D96B50", Offset = "0x2D95150", VA = "0x182D96B50", Slot = "7")]
	public void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x2D96B10", Offset = "0x2D95110", VA = "0x182D96B10", Slot = "8")]
	public void UpdateInstanceID(int instanceHandle, uint instanceID)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x2D96B30", Offset = "0x2D95130", VA = "0x182D96B30", Slot = "9")]
	public void UpdateInstanceMask(int instanceHandle, uint mask)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x2D96970", Offset = "0x2D94F70", VA = "0x182D96970", Slot = "10")]
	public void Build(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
	public ulong GetBuildScratchBufferRequiredSizeInBytes()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("UNITY_ASSERTIONS")]
	private void CheckInstanceHandleIsValid(int instanceHandle)
	{
	}
}
