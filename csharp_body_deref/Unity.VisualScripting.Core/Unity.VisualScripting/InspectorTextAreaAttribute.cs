// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectorTextAreaAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000047")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorTextAreaAttribute : Attribute
{
	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x10")]
	private float? _minLines;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x18")]
	private float? _maxLines;

	[Token(Token = "0x1700006B")]
	public float minLines
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x4CA3C70", Offset = "0x4CA3C70", VA = "0x4CA3C70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4CA3CA0", Offset = "0x4CA3CA0", VA = "0x4CA3CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public bool hasMinLines
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4CA3D00", Offset = "0x4CA3D00", VA = "0x4CA3D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	public float maxLines
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4CA3D30", Offset = "0x4CA3D30", VA = "0x4CA3D30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x4CA3D60", Offset = "0x4CA3D60", VA = "0x4CA3D60")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public bool hasMaxLines
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4CA3DC0", Offset = "0x4CA3DC0", VA = "0x4CA3DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4CA3DF0", Offset = "0x4CA3DF0", VA = "0x4CA3DF0")]
	public InspectorTextAreaAttribute()
	{
	}
}
