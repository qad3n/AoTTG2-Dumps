// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingAccelStruct
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x678B610", Offset = "0x678A610", VA = "0x678B610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x678B620", Offset = "0x678A620", VA = "0x678B620")]
	internal HardwareRayTracingAccelStruct(AccelerationStructureOptions options, ReferenceCounter counter)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x678B7B0", Offset = "0x678A7B0", VA = "0x678B7B0", Slot = "12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x678B7F0", Offset = "0x678A7F0", VA = "0x678B7F0", Slot = "4")]
	public int AddInstance(MeshInstanceDesc meshInstance)
	{
		return default(int);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x678BA50", Offset = "0x678AA50", VA = "0x678BA50", Slot = "5")]
	public void RemoveInstance(int instanceHandle)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x678BAB0", Offset = "0x678AAB0", VA = "0x678BAB0", Slot = "6")]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x678BB00", Offset = "0x678AB00", VA = "0x678BB00", Slot = "7")]
	public void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x678BB20", Offset = "0x678AB20", VA = "0x678BB20", Slot = "8")]
	public void UpdateInstanceID(int instanceHandle, uint instanceID)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x678BB40", Offset = "0x678AB40", VA = "0x678BB40", Slot = "9")]
	public void UpdateInstanceMask(int instanceHandle, uint mask)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x678BB60", Offset = "0x678AB60", VA = "0x678BB60", Slot = "10")]
	public void Build(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x678BBF0", Offset = "0x678ABF0", VA = "0x678BBF0", Slot = "11")]
	public ulong GetBuildScratchBufferRequiredSizeInBytes()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x678BC00", Offset = "0x678AC00", VA = "0x678BC00")]
	[Conditional("UNITY_ASSERTIONS")]
	private void CheckInstanceHandleIsValid(int instanceHandle)
	{
	}
}
