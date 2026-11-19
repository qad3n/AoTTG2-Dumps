// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.Serialization.InstanceDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel.Design.Serialization;

[Token(Token = "0x2000200")]
public sealed class InstanceDescriptor
{
	[Token(Token = "0x4000749")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly bool _003CIsComplete_003Ek__BackingField;

	[Token(Token = "0x170002DF")]
	public ICollection Arguments
	{
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x627EEA0", Offset = "0x627DEA0", VA = "0x627EEA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E0")]
	public MemberInfo MemberInfo
	{
		[Token(Token = "0x6000DCC")]
		[Address(RVA = "0x627EEB0", Offset = "0x627DEB0", VA = "0x627EEB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x627E8A0", Offset = "0x627D8A0", VA = "0x627E8A0")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments)
	{
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x627E8B0", Offset = "0x627D8B0", VA = "0x627E8B0")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments, bool isComplete)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x6264A70", Offset = "0x6263A70", VA = "0x6264A70")]
	public object Invoke()
	{
		return null;
	}
}
