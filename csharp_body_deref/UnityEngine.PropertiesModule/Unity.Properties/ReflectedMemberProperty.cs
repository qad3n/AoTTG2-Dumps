// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ReflectedMemberProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000011")]
public class ReflectedMemberProperty<TContainer, TValue> : Property<TContainer, TValue>
{
	[Token(Token = "0x2000012")]
	private delegate TValue GetStructValueAction(ref TContainer container);

	[Token(Token = "0x2000013")]
	private delegate void SetStructValueAction(ref TContainer container, TValue value);

	[Token(Token = "0x2000014")]
	private delegate TValue GetClassValueAction(TContainer container);

	[Token(Token = "0x2000015")]
	private delegate void SetClassValueAction(TContainer container, TValue value);

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x0")]
	private readonly IMemberInfo m_Info;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool m_IsStructContainerType;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	private GetStructValueAction m_GetStructValueAction;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x0")]
	private SetStructValueAction m_SetStructValueAction;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x0")]
	private GetClassValueAction m_GetClassValueAction;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	private SetClassValueAction m_SetClassValueAction;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly bool _003CIsReadOnly_003Ek__BackingField;

	[Token(Token = "0x17000012")]
	public override string Name
	{
		[Token(Token = "0x600003A")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600003B")]
	internal ReflectedMemberProperty(IMemberInfo info, string name)
	{
	}
}
