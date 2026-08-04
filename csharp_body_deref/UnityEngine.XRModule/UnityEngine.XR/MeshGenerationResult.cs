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
		[Address(RVA = "0x510D6E0", Offset = "0x510D6E0", VA = "0x510D6E0")]
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
		[Address(RVA = "0x510D6F0", Offset = "0x510D6F0", VA = "0x510D6F0")]
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
		[Address(RVA = "0x510D700", Offset = "0x510D700", VA = "0x510D700")]
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
		[Address(RVA = "0x510D710", Offset = "0x510D710", VA = "0x510D710")]
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
		[Address(RVA = "0x510D720", Offset = "0x510D720", VA = "0x510D720")]
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
		[Address(RVA = "0x510D730", Offset = "0x510D730", VA = "0x510D730")]
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
		[Address(RVA = "0x510D740", Offset = "0x510D740", VA = "0x510D740")]
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
		[Address(RVA = "0x510D750", Offset = "0x510D750", VA = "0x510D750")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x510D760", Offset = "0x510D760", VA = "0x510D760", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x510D800", Offset = "0x510D800", VA = "0x510D800", Slot = "4")]
	public bool Equals(MeshGenerationResult other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x510DA30", Offset = "0x510DA30", VA = "0x510DA30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
