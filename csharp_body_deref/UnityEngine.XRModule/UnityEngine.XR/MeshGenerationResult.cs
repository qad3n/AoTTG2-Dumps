// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.MeshGenerationResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200001C")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
public struct MeshGenerationResult : IEquatable<MeshGenerationResult>
{
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly ulong _003CTimestamp_003Ek__BackingField;

	[Token(Token = "0x17000016")]
	public readonly MeshId MeshId
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x6D24C40", Offset = "0x6D23C40", VA = "0x6D24C40")]
		[CompilerGenerated]
		get
		{
			return default(MeshId);
		}
	}

	[Token(Token = "0x17000017")]
	public readonly Mesh Mesh
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x6D24C50", Offset = "0x6D23C50", VA = "0x6D24C50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public readonly MeshCollider MeshCollider
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x6D24C60", Offset = "0x6D23C60", VA = "0x6D24C60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public readonly MeshGenerationStatus Status
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x6D24C70", Offset = "0x6D23C70", VA = "0x6D24C70")]
		[CompilerGenerated]
		get
		{
			return default(MeshGenerationStatus);
		}
	}

	[Token(Token = "0x1700001A")]
	public readonly MeshVertexAttributes Attributes
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x6D24C80", Offset = "0x6D23C80", VA = "0x6D24C80")]
		[CompilerGenerated]
		get
		{
			return default(MeshVertexAttributes);
		}
	}

	[Token(Token = "0x1700001B")]
	public readonly Vector3 Position
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x6D24C90", Offset = "0x6D23C90", VA = "0x6D24C90")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001C")]
	public readonly Quaternion Rotation
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x6D24CA0", Offset = "0x6D23CA0", VA = "0x6D24CA0")]
		[CompilerGenerated]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x1700001D")]
	public readonly Vector3 Scale
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x6D24CB0", Offset = "0x6D23CB0", VA = "0x6D24CB0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x6D24CC0", Offset = "0x6D23CC0", VA = "0x6D24CC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x6D24F50", Offset = "0x6D23F50", VA = "0x6D24F50", Slot = "4")]
	public bool Equals(MeshGenerationResult other)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x6D25110", Offset = "0x6D24110", VA = "0x6D25110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
