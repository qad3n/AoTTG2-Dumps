using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200016B")]
[AttributeUsage(AttributeTargets.Enum)]
public sealed class InspectorOrderAttribute : PropertyAttribute
{
	[Token(Token = "0x170001CD")]
	internal InspectorSort m_inspectorSort
	{
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x4AD4D90", Offset = "0x4AD4D90", VA = "0x4AD4D90")]
		[CompilerGenerated]
		get
		{
			return default(InspectorSort);
		}
	}

	[Token(Token = "0x170001CE")]
	internal InspectorSortDirection m_sortDirection
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x4AD4DA0", Offset = "0x4AD4DA0", VA = "0x4AD4DA0")]
		[CompilerGenerated]
		get
		{
			return default(InspectorSortDirection);
		}
	}
}
