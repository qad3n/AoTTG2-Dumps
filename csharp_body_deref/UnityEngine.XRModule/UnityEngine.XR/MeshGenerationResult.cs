using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200001B")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct MeshGenerationResult : IEquatable<MeshGenerationResult>
{
	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly ulong _003CTimestamp_003Ek__BackingField;

	[Token(Token = "0x17000014")]
	public readonly MeshId MeshId
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4DE5650", Offset = "0x4DE5650", VA = "0x4DE5650")]
		[CompilerGenerated]
		get
		{
			return default(MeshId);
		}
	}

	[Token(Token = "0x17000015")]
	public readonly Mesh Mesh
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4DE5660", Offset = "0x4DE5660", VA = "0x4DE5660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public readonly MeshCollider MeshCollider
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4DE5670", Offset = "0x4DE5670", VA = "0x4DE5670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public readonly MeshGenerationStatus Status
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4DE5680", Offset = "0x4DE5680", VA = "0x4DE5680")]
		[CompilerGenerated]
		get
		{
			return default(MeshGenerationStatus);
		}
	}

	[Token(Token = "0x17000018")]
	public readonly MeshVertexAttributes Attributes
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4DE5690", Offset = "0x4DE5690", VA = "0x4DE5690")]
		[CompilerGenerated]
		get
		{
			return default(MeshVertexAttributes);
		}
	}

	[Token(Token = "0x17000019")]
	public readonly Vector3 Position
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4DE56A0", Offset = "0x4DE56A0", VA = "0x4DE56A0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001A")]
	public readonly Quaternion Rotation
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x4DE56B0", Offset = "0x4DE56B0", VA = "0x4DE56B0")]
		[CompilerGenerated]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x1700001B")]
	public readonly Vector3 Scale
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x4DE56C0", Offset = "0x4DE56C0", VA = "0x4DE56C0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4DE56D0", Offset = "0x4DE56D0", VA = "0x4DE56D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4DE5770", Offset = "0x4DE5770", VA = "0x4DE5770", Slot = "4")]
	public bool Equals(MeshGenerationResult other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4DE59A0", Offset = "0x4DE59A0", VA = "0x4DE59A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
